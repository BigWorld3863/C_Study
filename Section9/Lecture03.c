#include <stdio.h>

int int_min(int, int);

int main()
{
	int i1, i2;
	
	while (1)
	{
		printf("Input two integers : ");
		
		if (scanf("%d %d", &i1, &i2) != 2)
			break;
		
		int lesser = int_min(i1, i2);
		//int lesser = min;
		printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
	}
	
	printf("End.\n");
	
	return 0;
}

int int_min(int a, int b)
//int_min(int i, int j)
{
	int min;
	
	if (a > b)
		min = b;
	
	else
		min = a;
	
	return min;
	
	// return (a < b) ? a : b;
	
	// return (float)min;
	
	/*
	if (a < b)
		return a;
	else
		return b;
		
	printf("ERROR");
	exit(1);
	*/
	
	// return; // return with no value
}