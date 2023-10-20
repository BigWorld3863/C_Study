// for loops with array
#include <stdio.h>

#define SIZE 5

int main()
{
	int my_arr[SIZE];
	
	for (int i = 0; i < SIZE; ++i)
		my_arr[i] = i;
	
	for (int i = 0; i < SIZE; ++i)
		printf("%d ", my_arr[i]);
	
	
	return 0;
}