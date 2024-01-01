#include <stdio.h>

#define MONTHS 12
#define YEARS 3

int main()
{
	// double year2016[MONTHS] = {-3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2};
	// double year2017[MONTHS] = {-1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9};
	// double year2018[MONTHS] = {-4.0,-1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6};

	double years[YEARS][MONTHS] =
	{
		{-3.2, 0.2, 7.0, 14.1, 19.6, 23.6, 26.2, 28.0, 23.1, 16.1, 6.8, 1.2},
		{-1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9},
		{-4.0,-1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6}
	};

	printf("[Temperature Data]\nYear index :");

	/*for (int i = 1; i <= MONTHS; i++)
		printf("\t%d", i);
	printf("\n");*/

	for (int k = 1; k <= MONTHS; k++)
	{
		printf("\t%d", k);

		if (k == MONTHS)
		{
			printf("\n");

			for (int j = 0; j < YEARS; j++)
			{
				printf("Year %d\t   :", j);

				for (int i = 0; i < MONTHS; i++)
				{
					printf("\t%.1lf", years[j][i]);
				}
				printf("\n");
			}

		}
	}
	printf("\n");

	printf("[Yearly average temperatures of 3 years]\n");

	for (int j = 0; j < YEARS; j++)
	{
		double sum = 0;
		printf("Year %d : ", j);

		for (int i = 0; i < MONTHS; i++)
		{
			sum += years[j][i];
		}
		printf("average temperature = %.1lf\n", sum / MONTHS);
	}
	printf("\n");

	printf("[Monthly average temperatures for 3 years]\nYear index :");

	for (int k = 1; k <= MONTHS; k++)
	{
		printf("\t%d", k);

		if (k == MONTHS)
		{

			printf("\navg temps  :");

			for (int i = 0; i < MONTHS; i++)
			{
				double sum = 0;

				for (int j = 0; j < YEARS; j++)
				{
					sum += years[j][i];
				}
				printf("\t%.1lf", sum / YEARS);
			}

		}
	}

	return 0;
}