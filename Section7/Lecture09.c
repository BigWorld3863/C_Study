// Conditional Operator
#include <stdio.h>
#include <stdbool.h>

int main()
{
	// int temp;
	
	// temp = true ? 1024 : 7; // ternary operator
	// printf("%d\n", temp);
	
	// temp = false ? 1024 : 7;
	// printf("%d\n", temp);
	
	// int a = 1, b = 2;
	// int max = (a > b) ? a : b;

	
	
	int number;
	scanf("%d", &number);
	
	(number % 2 == 0) ? printf("Even\n") : printf("Odd\n");
	
	return 0;
}