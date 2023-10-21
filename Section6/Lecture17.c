// for loops with array
#include <stdio.h>

#define SIZE 5

int main()
{
	// int my_arr[SIZE];
	
	// for (int i = 0; i < SIZE; ++i)
	// 	my_arr[i] = i;
	
	// for (int i = 0; i < SIZE; ++i)
	// 	printf("%d ", my_arr[i]);
	
	int my_num[SIZE];
	int sum = 0;
	
	printf("Enter %d numbers : ", SIZE);
	
	for (int i = 0; i < SIZE; ++i)
	{
		scanf("%d", &my_num[i]);
	}
	
	for (int i = 0; i < SIZE; ++i)
	{
		sum += my_num[i];
	}

	printf("%d", sum);
	
	
	return 0;
}