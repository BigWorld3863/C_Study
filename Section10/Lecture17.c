// Variable-Length Arrays(VLAs)
#include <stdio.h>

#define ROWS 3
#define COLS 4

int sum2d_4(int row, int col, int ar[row][col]);

int main()
{
	int n;
	printf("Input array length : ");
	scanf("%d", &n);
	
	//int n = 7;
	float my_arr[n];//Note: cannot change after declaration
	
	for (int i = 0; i < n; i++)
		my_arr[i] = (float)i;
	
	for (int i = 0; i < n; i++)
		printf("%f\n", my_arr[i]);
	
	int data[ROWS][COLS] = 
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 0, 1, 2}
	};
	
	printf("%d\n", sum2d_4(ROWS, COLS, data));
	
	return 0;
}

int sum2d_4(int row, int col, int ar[row][col])
{
	int r, c, tot = 0;
	for (r = 0; r < row; r++)
		for (c = 0; c < col; c++)
			tot += ar[r][c];
	
	return tot;
}