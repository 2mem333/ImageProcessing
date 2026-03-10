struct ImageMatris {
	int height;
	int width;
	int* data;
};

class ImageProcess {
	ImageMatris inputImage;

public:
	void empty(int* data, int size)
	{
		for (int i = 0; i < size; i++)
			data[i] = 0;
	}

	ImageProcess(int* inpImg, int II_HEIGHT, int II_WIDTH)
	{
		inputImage.data = inpImg;
		inputImage.height = II_HEIGHT;
		inputImage.width = II_WIDTH;
	}

	int* MoveMask_OneChannel(int* Mask, int M_HEIGHT, int M_WIDTH)
	{
		//FIXING THE BORDER PROBLEM.
		int outRowCount = inputImage.height - 2;
		int outColCount = inputImage.width - 2;

		int* outPicture = new int[outRowCount * outColCount];

		//MOVING THE MASK
		for (int r = 0; r < outRowCount; r++)
		{
			for (int c = 0; c < outColCount; c++)
			{
				int sum = 0;
				for (int i = 0; i < M_HEIGHT; i++)
					for (int a = 0; a < M_WIDTH; a++)
						sum += inputImage.data[(c + a) + (r + i) * inputImage.width] * Mask[(2 - a) + (2 * M_WIDTH) - i * M_WIDTH];
				//FLIPPING THE MASK HERE, (CONVULATION RULES)
				//Mask[(2 - a) + (2 * M_WIDTH) - i * M_WIDTH];

				//if (sum < 0) sum = 0;
				//if (sum > 255) sum = 255;
				outPicture[c + r * (outColCount)] = sum;
			}
		}

		return outPicture;
	}

	ImageMatris* FindGradiant(int* MaskX, int* MaskY)
	{
		ImageMatris* outputImage = new ImageMatris();

		//bunlarýn hesaplamasý sonra ayrýntýlý otomatik yapýlacak, border probleminden kaçýnýyoruz
		outputImage->width = 398;
		outputImage->height = 398;

		int* outPicture_X = MoveMask_OneChannel(MaskX, 3, 3);
		int* outPicture_Y = MoveMask_OneChannel(MaskY, 3, 3);

		int* data = new int[outputImage->width * outputImage->height];

		for (int row = 0; row < outputImage->height; row++)
		{
			for (int col = 0; col < outputImage->width; col++)
			{
				int gx = outPicture_X[row * outputImage->width + col];
				int gy = outPicture_Y[row * outputImage->width + col];

				int magnitude = sqrt(gx * gx + gy * gy);

				//if (magnitude < 0)
				//	magnitude = 0;
				//if (magnitude > 255)
				//	magnitude = 255;

				//APPLYING TRESHOLD
				if (magnitude > 200) magnitude = 255;
				else magnitude = 0;

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

		for (int row = 0; row < outputImage->height; row++)
			for (int col = 0; col < outputImage->width; col++)
			{
				int indeks = row * outputImage->width + col;

				if (inputImage->data[indeks] > treshold)
					outputImage->data[indeks] = 255;
			}

		return outputImage;
	}

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
					double rad = teta * 3.14159265 / 180.0;
					int p = (int)(col * cos(rad) + row * sin(rad));
					int pIndeks = p + Pmax;

					data[pIndeks * 180 + teta]++;
				}
			}
		}
		outputImage->data = data;
		return outputImage;

	}

	ImageMatris* LinesImage(ImageMatris* houghImage, int realWidth, int realHeight)
	{
		ImageMatris* outputImage = new ImageMatris();

		outputImage->width = realWidth;
		outputImage->height = realHeight;

		int* data = new int[outputImage->height * outputImage->width];
		empty(data, outputImage->width * outputImage->height);

		int Pmax = (int)sqrt(realWidth * realWidth + realHeight * realHeight); //p'nin maksimum buyukluk kosegen kadar

		for (int p = 0; p < houghImage->height; p++)
		{
			for (int teta = 0; teta < houghImage->width; teta++)
			{
				if (houghImage->data[p * houghImage->width + teta] < 70) //buradaki deðer neye göre belirlenecek?
					continue;

				double rad = teta * 3.14159265 / 180.0;
				double c = cos(rad);
				double s = sin(rad);

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

		outputImage->data = data;
		return outputImage;

	}

};