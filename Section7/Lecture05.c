#include <stdio.h>

int main()
{
	// minimum 127 levels of nestings
	int number = 4;

	if (number > 5)
	{
		if (number < 10)
			printf("larger than 5 smaller than 10\n");
	}
	else
		printf("Less than or equal to 5");
	
	// Compilers ignore indenting!!
	
	return 0;
}