#include <stdio.h>

int main()
{
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	
	//int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	
	//int arr[2][3] = { 1, 2 };// insufficient initializer
	
	printf("%d\n\n", arr[1][1]);
	
	
	for (int j = 0; j < 2; j++)
	{
		for (int i= 0; i < 3; i++)
			printf("%d", arr[j][i]);
		
		printf("\n");
	}
	printf("\n");
		
	int *ptr = &arr[0][0];
	for (int k = 0; k < 6; ++k)
		//printf("%d ", *(ptr + k));
		printf("%d ", ptr[k]);
	printf("\n\n");
	
	printf("%zd %zd\n", sizeof(arr), sizeof(arr[0]));
	printf("\n");
	
	// 3D array
	
	int arr_34[2][3][4] = {
		
		
		
		
		
		
		
		
	}
	
	
	
	return 0;
}