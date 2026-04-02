#include <algorithm>
#define radKatsayi 5 //buna gore arttirilir
#define minRadius 15
//int radius = minRadius + radKatsayi * r;

struct ImageMatris {
	int height;
	int width;
	int* data;
};

struct TensorMatris {
	int xlen;
	int ylen;
	int zlen;
	int* data;
};

struct MaskMatris {
	int* data;
	int len;
};

struct DoubleTresholdValues {
	int thigh;
	int tlow;
};

	struct CircleCandidate
	{
		int a;
		int b;
		int rIndex;
		int radius;
		int vote;
	};
class ImageProcess {

private:
	//LOOKUP TABLES
	double cosTable[360];
	double sinTable[360];

//ISSUE4 binary image olusurken otomatik esik kullanilmali (histogram gibi)
//ISSUE5 border problemi baska sekilde de cozulebilir: 0 aliriz erisilemeyen yerleri
public:
	void empty(int* data, int size)
	{
		for (int i = 0; i < size; i++)
			data[i] = 0;
	}

	ImageProcess()
	{
		for (int t = 0; t < 360; t++)
		{
			double rad = t * 3.14159265 / 180.0;
			cosTable[t] = cos(rad);
			sinTable[t] = sin(rad);
		}
	}
	int* MoveMask_OneChannel(ImageMatris* inputImage, MaskMatris *mask)
	{
		int offset = mask->len/2*2;
		//FIXING THE BORDER PROBLEM.
		int outRowCount = inputImage->height - offset;
		int outColCount = inputImage->width - offset;

		int* outPicture = new int[outRowCount * outColCount];

		//MOVING THE MASK
		for (int r = 0; r < outRowCount; r++)
		{
			for (int c = 0; c < outColCount; c++)
			{
				int sum = 0;
				for (int i = 0; i < mask->len; i++)
					for (int a = 0; a < mask->len; a++)
						sum += inputImage->data[(c + a) + (r + i) * inputImage->width] * mask->data[(offset - a) + (offset * mask->len) - i * mask->len];
				//FLIPPING THE MASK HERE, (CONVULATION RULES)
				outPicture[c + r * (outColCount)] = sum;
			}
		}

		return outPicture;
	}

	ImageMatris* GaussianBlur(ImageMatris* inputImage, int derece = 2)
	{
		int gaussian1[9] = { 0,1,0,1,4,1,0,1,0 };
		int gaussian2[9] = { 1,2,1,2,4,2,1,2,1 };

		MaskMatris* GaussianMask = new MaskMatris();
		GaussianMask->len = 3;

		if(derece == 2)
		GaussianMask->data = gaussian2;
		else
		GaussianMask->data = gaussian1;

		int offset = 2;
		ImageMatris* outputImage = new ImageMatris();
		outputImage->width = inputImage->width - offset;
		outputImage->height = inputImage->height - offset;

		int* outPictureData = MoveMask_OneChannel(inputImage, GaussianMask);
		for (int row = 0; row < outputImage->height; row++)
			for (int col = 0; col < outputImage->width; col++)
				outPictureData[row * outputImage->width + col] /= 8* derece;

		outputImage->data = outPictureData;
		delete GaussianMask;

		return outputImage;
	}

	//----------DEDECTING EDGES/Finding Binary-----------------
	//GRADIANT
	ImageMatris* FindGradiant(ImageMatris* inpImg, MaskMatris* MaskX, MaskMatris* MaskY)
	{
		ImageMatris* outputImage = new ImageMatris();

		//mask gezdirme fonksiyonu sonuc boyutu ile ayni hale getirmek icin, border problem yuzunden
		int offset = MaskX->len / 2 * 2;
		outputImage->width = inpImg->width- offset;
		outputImage->height = inpImg->height- offset;

		int* outPicture_X = MoveMask_OneChannel(inpImg, MaskX);
		int* outPicture_Y = MoveMask_OneChannel(inpImg, MaskY);

		int* data = new int[outputImage->width * outputImage->height];

		for (int row = 0; row < outputImage->height; row++)
		{
			for (int col = 0; col < outputImage->width; col++)
			{
				int gx = outPicture_X[row * outputImage->width + col];
				int gy = outPicture_Y[row * outputImage->width + col];

				int magnitude = sqrt(gx * gx + gy * gy);

				if (magnitude < 0)
					magnitude = 0;
				if (magnitude > 255)
					magnitude = 255;

				////APPLYING TRESHOLD BINARY IMAGE
				//if (magnitude > 200) magnitude = 255;
				//else magnitude = 0;

				data[row * outputImage->width + col] = magnitude;
			}
		}

		outputImage->data = data;

		delete outPicture_X;
		delete outPicture_Y;

		return outputImage;
	}
	ImageMatris* BinaryImage(ImageMatris* inputImage, int treshold)
	{
		ImageMatris *outputImage = new ImageMatris();
		outputImage->height = inputImage->height;
		outputImage->width = inputImage->width;

		int* data = new int[outputImage->height * outputImage->width];
		empty(data, outputImage->height * outputImage->width);

		for (int row = 0; row < outputImage->height; row++)
			for (int col = 0; col < outputImage->width; col++)
			{
				int indeks = row * outputImage->width + col;

				if (inputImage->data[indeks] > treshold)
					data[indeks] = 255;
			}

		outputImage->data = data;
		return outputImage;
	}

	//CANNY
	ImageMatris* NonMaximumSuperession1(ImageMatris* inputImage, MaskMatris* MaskX, MaskMatris* MaskY)
	{
		ImageMatris* outputImage = new ImageMatris();

		int offset = MaskX->len / 2 * 2;
		outputImage->width = inputImage->width - offset;
		outputImage->height = inputImage->height - offset;

		int* outPicture_X = MoveMask_OneChannel(inputImage, MaskX);
		int* outPicture_Y = MoveMask_OneChannel(inputImage, MaskY);

		int* data = new int[outputImage->width * outputImage->height];
		int* out = new int[outputImage->width * outputImage->height];
		empty(out, outputImage->width * outputImage->height);

		//Find the magnitudes and fill the data
		for (int row = 0; row < outputImage->height; row++)
		{
			for (int col = 0; col < outputImage->width; col++)
			{
				int gx = outPicture_X[row * outputImage->width + col];
				int gy = outPicture_Y[row * outputImage->width + col];

				int magnitude = sqrt(gx * gx + gy * gy);

				if (magnitude < 0)
					magnitude = 0;
				if (magnitude > 255)
					magnitude = 255;

				data[row * outputImage->width + col] = magnitude;
			}
		}

		//Apply non-maximum supression and eliminate 
		for (int row = 1; row < outputImage->height -1; row++)
		{
			for (int col = 1; col < outputImage->width -1; col++)
			{
				int gx = outPicture_X[row * outputImage->width + col];
				int gy = outPicture_Y[row * outputImage->width + col];

				int magnitude = sqrt(gx * gx + gy * gy);

				double angle = atan2(gy, gx) * 180.0 / 3.14159265;
				if (angle < 0)
					angle += 180;
				int direction;
				int n1Mag, n2Mag;

				//sag, sol 0
				if ((angle >= 0 && angle < 22.5) || (angle >= 157.5))
				{
					n1Mag = data[row * outputImage->width + col - 1];
					n2Mag = data[row * outputImage->width + col + 1];
				}

                //sag ust, sol alt 45
				else if (angle < 67.5)
				{
					n1Mag = data[(row - 1) *outputImage->width + col + 1];
					n2Mag = data[(row + 1) *outputImage->width + col - 1];
				}

				//ust, alt 90
				else if (angle < 112.5)
				{
					n1Mag = data[(row - 1) * outputImage->width + col];
					n2Mag = data[(row + 1) * outputImage->width + col];
				}

				//sol ust, sag alt, 135
				else
				{
					n1Mag = data[(row - 1) * outputImage->width + col - 1];
					n2Mag = data[(row + 1) * outputImage->width + col + 1];
				}

				if (data[row * outputImage->width + col] >= n1Mag && data[row * outputImage->width + col] >= n2Mag)
					out[row * outputImage->width + col] = data[row * outputImage->width + col];
				else
					out[row * outputImage->width + col] = 0;
			}
		}

		outputImage->data = out;

		delete[] outPicture_X;
		delete[] outPicture_Y;

		return outputImage;
	}
	DoubleTresholdValues DoubleTresholding(ImageMatris* inputImage)
	{
		//#ISSUE1 double treshold neye gore yapilmai?
		int hist[256] = { 0 };
		int total = inputImage->width * inputImage->height;

		int nonZeroCount = 0;

		// Histogram (0 disinda)
		for (int i = 0; i < total; i++)
		{
			int pixel = inputImage->data[i];
			hist[pixel]++;

			if (pixel > 0)
				nonZeroCount++;
		}

		DoubleTresholdValues values;
		values.tlow = 0;
		values.thigh = 0;

		// Hic kenar yoksa
		if (nonZeroCount == 0)
			return values;

		int targetHigh = (int)(nonZeroCount * 0.40);
		if (targetHigh < 1)
			targetHigh = 1;

		int sum = 0;
		for (int i = 255; i >= 1; i--)
		{
			sum += hist[i];
			if (sum >= targetHigh)
			{
				values.thigh = i;
				break;
			}
		}

		values.tlow = (int)(0.5 * values.thigh);

		return values;
	}
	ImageMatris* HysteriesTresold(ImageMatris* inputImage)
	{
		DoubleTresholdValues values = DoubleTresholding(inputImage);

		ImageMatris* outputImage = new ImageMatris();
		outputImage->height = inputImage->height;
		outputImage->width = inputImage->width;

		int* data = new int[inputImage->width * inputImage->height];
		empty(data, inputImage->width * inputImage->height);

		for (int row = 1; row < inputImage->height - 1; row++)
		{
			for (int col = 1; col < inputImage->width - 1; col++)
			{   //%100 edge
				if (inputImage->data[row * inputImage->width + col] >= values.thigh) 
				{
					data[row * inputImage->width + col] = inputImage->data[row * inputImage->width + col];
				}
				//look for 8 neighbors
				else if (inputImage->data[row * inputImage->width + col] < values.tlow)
				{
					//#ISSUE2 Hysteries treshold'da 8 farkli yon mu 4 farkli yon mu kontrol edilmeli?
					int up = inputImage->data[(row - 1) * inputImage->width + col];
					int down = inputImage->data[(row + 1) * inputImage->width + col];
					int left = inputImage->data[row * inputImage->width + (col - 1)];
					int right = inputImage->data[row * inputImage->width + (col + 1)];

					if (up > values.thigh || down > values.thigh || left > values.thigh || right > values.thigh)
						data[row * inputImage->width + col] = inputImage->data[row * inputImage->width + col];
				}
			}
		}
		
		outputImage->data = data;
		return outputImage;
	}


	//----------DEDECTING LINES----------------------------
	ImageMatris* HoughLineSpace(ImageMatris* binaryImage)
	{
		//SOL EN ALT KÖÞEYÝ (0,0) OLARAK REFERANS ALDIM
		//x.sin0 - y.cos0 + p = 0

		ImageMatris* outputImage = new ImageMatris();

		int Pmax = (int)sqrt(binaryImage->width * binaryImage->width + binaryImage->height * binaryImage->height); //p'nin maksimum buyukluk kosegen kadar
		int rowCount = 2 * Pmax + 1; //0'i da dahil et.

		outputImage->height = rowCount;
		outputImage->width = 180;

		int* data = new int[outputImage->height * outputImage->width];
		empty(data, outputImage->width * outputImage->height);

		for (int row = 0; row < binaryImage->height; row++)
		{
			for (int col = 0; col < binaryImage->width; col++)
			{
				if (binaryImage->data[row * binaryImage->width + col] == 0) //binary pixelleri al
					continue;

				for (int teta = 0; teta < 180; teta++) //teta açýsý sýnýrlý oldu
				{
					int p = (int)(col * cosTable[teta] + row * sinTable[teta]);
					int pIndeks = p + Pmax;

					data[pIndeks * 180 + teta]++;
				}
			}
		}
		outputImage->data = data;
		return outputImage;

	}
	ImageMatris* LinesImage(ImageMatris* houghImage, int realWidth, int realHeight, int treshold, int lineCount = 0, bool selectDesired = true)
	{
		ImageMatris* outputImage = new ImageMatris();

		outputImage->width = realWidth;
		outputImage->height = realHeight;

		int* data = new int[outputImage->height * outputImage->width];
		empty(data, outputImage->width * outputImage->height);

		int Pmax = (int)sqrt(realWidth * realWidth + realHeight * realHeight); //p'nin maksimum buyukluk kosegen kadar

		// ===== EKLEME BAÞLANGIÇ =====
		int* best_p = new int[lineCount];
		int* best_theta = new int[lineCount];
		int* best_vote = new int[lineCount];

		for (int i = 0; i < lineCount; i++)
		{
			best_p[i] = -1;
			best_theta[i] = -1;
			best_vote[i] = -1;
		}

		for (int p = 0; p < houghImage->height; p++)
		{
			for (int teta = 0; teta < houghImage->width; teta++)
			{
				int vote = houghImage->data[p * houghImage->width + teta];

				int minIndex = 0;
				for (int i = 1; i < lineCount; i++)
				{
					if (best_vote[i] < best_vote[minIndex])
						minIndex = i;
				}

				if (vote > best_vote[minIndex])
				{
					best_vote[minIndex] = vote;
					best_p[minIndex] = p;
					best_theta[minIndex] = teta;
				}
			}
		}
		// ===== EKLEME BÝTÝÞ =====


		for (int p = 0; p < houghImage->height; p++)
		{
			for (int teta = 0; teta < houghImage->width; teta++)
			{
				// ===== EKLEME BAÞLANGIÇ =====
				bool selected = false;
				for (int i = 0; i < lineCount; i++)
				{
					if (p == best_p[i] && teta == best_theta[i])
					{
						selected = true;
						break;
					}
				}
				if (!selected && selectDesired) 
					continue;
				// ===== EKLEME BÝTÝÞ =====

				//belli bir esikten daha fazla oy alinmis mi diye kontrol etmek gerek
				if (houghImage->data[p * houghImage->width + teta] < treshold) //buradaki deðer neye göre belirlenecek?
					continue;

				double c = cosTable[teta];
				double s = sinTable[teta];

				int New_p = p - Pmax; //eski haline donusturuyoruz.
				if (abs(s) > 0.0001)
				{
					for (int x = 0; x < outputImage->width; x++)
					{
						int y = (int)((New_p - x * c) / s);

						if (y >= 0 && y < outputImage->height)
							data[y * outputImage->width + x] = 255;
					}
				}
				else
				{
					for (int y = 0; y < outputImage->height; y++)
					{
						int x = (int)((New_p - y * s) / c);

						if (x >= 0 && x < outputImage->width)
							data[y * outputImage->width + x] = 255;
					}
				}

			}
		}

		// ===== EKLEME =====
		delete[] best_p;
		delete[] best_theta;
		delete[] best_vote;
		// ===== EKLEME =====

		outputImage->data = data;
		return outputImage;
	}

	
	//----------DEDECTING CIRCLES-------------------------

	bool IsLocalMaximum(TensorMatris* tensor, int a, int b, int r, int neighborhoodXY, int neighborhoodR)
	{
		int planeSize = tensor->xlen * tensor->ylen;
		int current = tensor->data[r * planeSize + b * tensor->xlen + a];

		for (int rr = std::max(0, r - neighborhoodR); rr <= std::min(tensor->zlen - 1, r + neighborhoodR); rr++)
		{
			for (int yy = std::max(0, b - neighborhoodXY); yy <= std::min(tensor->ylen - 1, b + neighborhoodXY); yy++)
			{
				for (int xx = std::max(0, a - neighborhoodXY); xx <= std::min(tensor->xlen - 1, a + neighborhoodXY); xx++)
				{
					if (xx == a && yy == b && rr == r) continue;

					int neighbor = tensor->data[rr * planeSize + yy * tensor->xlen + xx];
					if (neighbor > current)
						return false;
				}
			}
		}
		return true;
	}

	TensorMatris* HoughCircleSpace(ImageMatris* binaryImage, int r = 0)
	{
		TensorMatris* tensorOut = new TensorMatris();
		tensorOut->xlen = binaryImage->width;
		tensorOut->ylen = binaryImage->height;
		tensorOut->zlen = 20; 

		int* data = new int[tensorOut->xlen * tensorOut->ylen * tensorOut->zlen];
		empty(data, tensorOut->xlen * tensorOut->ylen * tensorOut->zlen);

		for (int row = 0; row < binaryImage->height; row++)
		{
			for (int col = 0; col < binaryImage->width; col++)
			{
				if (binaryImage->data[row * binaryImage->width + col] == 0) //binary pixelleri al
					continue;
				
				for (int r = 0; r < tensorOut->zlen; r++) {
					int radius = minRadius + radKatsayi * r;

					for (int teta = 0; teta < 360; teta += 1) //teta açýsý sýnýrlý oldu
					{
						double rad = teta * 3.14159265 / 180.0;

						int a = (int)round(col - radius * cosTable[teta]);
						int b = (int)round(row - radius * sinTable[teta]);

						//neden bunu uyguladýk?
						if (a >= 0 && a < tensorOut->xlen && b >= 0 && b < tensorOut->ylen)
							data[r * (tensorOut->xlen* tensorOut->ylen) + b * tensorOut->xlen + a] += 1;

					}
				}
			}
		}
		tensorOut->data = data;
		return tensorOut;
	}
	bool IsTooClose(const CircleCandidate& c1, const CircleCandidate& c2, int centerDistThresh, int radiusThresh)
	{
		int dx = c1.a - c2.a;
		int dy = c1.b - c2.b;
		int dr = abs(c1.radius - c2.radius);

		return (dx * dx + dy * dy <= centerDistThresh * centerDistThresh) && (dr <= radiusThresh);
	}
	ImageMatris* SelectNCircles(TensorMatris* tensor, int topN, int centerDistThresh, int radiusThresh)
	{
		CircleCandidate* best = new CircleCandidate[topN];
		int found = 0;

		int planeSize = tensor->xlen * tensor->ylen;

		for (int r = 0; r < tensor->zlen; r++)
		{
			int radius = minRadius + radKatsayi * r;

			for (int b = 0; b < tensor->ylen; b++)
			{
				for (int a = 0; a < tensor->xlen; a++)
				{
					int idx = r * planeSize + b * tensor->xlen + a;
					int vote = tensor->data[idx];
					if (vote < 1)
						continue;

					if (!IsLocalMaximum(tensor, a, b, r, centerDistThresh, 2))
						continue;

					CircleCandidate cand;
					cand.a = a;
					cand.b = b;
					cand.rIndex = r;
					cand.radius = radius;
					cand.vote = vote;

					bool tooClose = false;
					for (int i = 0; i < found; i++)
					{
						//degistirilebilir
						if (IsTooClose(cand, best[i], centerDistThresh, radiusThresh))
						{
							tooClose = true;
							break;
						}
					}

					if (tooClose)
						continue;

					if (found < topN)
					{
						best[found] = cand;
						found++;

						for (int i = found - 1; i > 0; i--)
						{
							if (best[i].vote > best[i - 1].vote)
							{
								CircleCandidate temp = best[i];
								best[i] = best[i - 1];
								best[i - 1] = temp;
							}
						}
					}
					else if (vote > best[topN - 1].vote)
					{
						best[topN - 1] = cand;

						for (int i = topN - 1; i > 0; i--)
						{
							if (best[i].vote > best[i - 1].vote)
							{
								CircleCandidate temp = best[i];
								best[i] = best[i - 1];
								best[i - 1] = temp;
							}
						}
					}
				}
			}
		}

		std::cout << "Top " << found << " distinct circle candidates:" << std::endl;
		for (int i = 0; i < found; i++)
		{
			std::cout << i + 1
				<< ") center = (" << best[i].a << ", " << best[i].b << ")"
				<< ", radius = " << best[i].radius
				<< ", vote = " << best[i].vote
				<< std::endl;
		}

		ImageMatris* outputImage = new ImageMatris();
		outputImage->width = tensor->xlen;
		outputImage->height = tensor->ylen;

		int* data = new int[outputImage->width * outputImage->height];
		empty(data, outputImage->width * outputImage->height);

		// en iyi noktalari data üzerinde cembersel, dataya kaydet
		for (int i = 0; i < found; i++)
		{
			int cx = best[i].a;
			int cy = best[i].b;
			int radius = best[i].radius;

			for (int theta = 0; theta < 360; theta += 5)
			{
				int x = (int)round(cx + radius * cosTable[theta]);
				int y = (int)round(cy + radius * sinTable[theta]);

				if (x >= 0 && x < outputImage->width &&
					y >= 0 && y < outputImage->height)
				{
					data[y * outputImage->width + x] = 255;
				}
			}

			// merkezin kendisini de iþaretle
			if (cx >= 0 && cx < outputImage->width &&
				cy >= 0 && cy < outputImage->height)
			{
				data[cy * outputImage->width + cx] = 255;
			}
		}

		outputImage->data = data;
		delete[] best;
		return outputImage;
	}


	int* GradientMagnitudeHistogram(ImageMatris* inpImg, MaskMatris* MaskX, MaskMatris* MaskY, int histSize = 1000)
	{
		int* outPicture_X = MoveMask_OneChannel(inpImg, MaskX);
		int* outPicture_Y = MoveMask_OneChannel(inpImg, MaskY);

		int offset = MaskX->len / 2 * 2;
		int outWidth = inpImg->width - offset;
		int outHeight = inpImg->height - offset;

		int* hist = new int[histSize];
		empty(hist, histSize);

		for (int row = 0; row < outHeight; row++)
		{
			for (int col = 0; col < outWidth; col++)
			{
				int gx = outPicture_X[row * outWidth + col];
				int gy = outPicture_Y[row * outWidth + col];

				int magnitude = (int)sqrt((double)(gx * gx + gy * gy));

				if (magnitude < 0)
					magnitude = 0;
				if (magnitude >= histSize)
					magnitude = histSize - 1;

				hist[magnitude]++;
			}
		}

		delete[] outPicture_X;
		delete[] outPicture_Y;

		return hist;
	}

};