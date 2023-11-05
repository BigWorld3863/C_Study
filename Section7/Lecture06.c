#include <stdio.h>
//#include <stdbool.h>

int main()
{
	// My code
	// int num, i;
	
	// printf("input integer: ");
	// scanf("%d", &num);
	
	// if (num < 0)
	// 	printf("The integer is a negative number\n");
	
	// else if (num == 0)
	// 	printf("The integer is 0\n");
	
	// else if (num == 1)
	// 	printf("The integer is 1\n");
	
	// else if (num == 2)
	// 	printf("The integer is a prime number\n");
	
	// else //if (num > 2)
	// {
	// 	for (i = 2; i < num; i++)
	// 	{
	// 		if (num % i == 0)
	// 			break;
	// 	}
		
	// 	if (i == num)
	// 		printf("The integer is a prime number\n");
		
	// 	else
	// 		printf("The integer is not a prime number\n");
	// }
	
	// In lecture, using bool
	unsigned num;
	int isPrime = 1; // flag, try bool type
	
	scanf("%u", &num);

	for (unsigned i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			isPrime = 0;
			printf("%u is divisible by %u\n", num, i);
		}
	}
	
	if (isPrime)
		printf("%u is a prime number\n", num);
	
	else
		printf("%u is not a prime number\n", num);
	
	return 0;
}