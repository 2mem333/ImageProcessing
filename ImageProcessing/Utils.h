
//MOVE MASK ON ONLY ONE CHANNEL
int *MoveMask_OneChannel(int* inputImg, int II_HEIGHT, int II_WIDTH, int* Mask, int M_HEIGHT, int M_WIDTH)
{
	//FIXING THE BORDER PROBLEM.
	int outRowCount = II_HEIGHT - 2;
	int outColCount = II_WIDTH - 2;

	int* outPicture = new int[outRowCount * outColCount];

	//MOVING THE MASK
	for (int r = 0; r < outRowCount; r++)
	{
		for (int c = 0; c < outColCount; c++)
		{
			int sum = 0;
			for (int i = 0; i < M_HEIGHT; i++)
				for (int a = 0; a < M_WIDTH; a++)
					sum += inputImg[(c + a) + (r + i) * II_WIDTH] * Mask[(2 - a) + (2 * M_WIDTH) - i * M_WIDTH];
			//FLIPPING THE MASK HERE, (CONVULATION RULES)
			//Mask[(2 - a) + (2 * M_WIDTH) - i * M_WIDTH];

			if (sum < 0) sum = 0;
			if (sum > 255) sum = 255;
			outPicture[c + r * (outColCount)] = sum;
		}
	}

	return outPicture;
}