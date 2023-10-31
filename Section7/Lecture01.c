// if
#include <stdio.h>

int main()
{
	int number;
	
	printf("Input a positive integer : ");
	scanf("%d", &number);
	
	if (number % 2 == 0)
		printf("The integer is even number\n");
	
	else
		printf("The integer is odd number\n");
	

	
	return 0;
}