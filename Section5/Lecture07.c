// % operator
#include <stdio.h>

int main()
{
	// int hours = 0, minutes = 0, seconds = 0;
	
	// while (seconds >= 0)
	// {
	// 	printf("Input seconds : ");
	// 	scanf("%d", &seconds);

	// 	hours = seconds / 3600;
	// 	seconds %= 3600;

	// 	minutes = seconds / 60;
	// 	seconds %= 60;
	// 	if (seconds >= 0)
	// 	{
	// 	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
	// 	}
	// }
	
	// printf("Good bye\n");
	
	int div, mod;
	
	div = 11 / 5; 
	mod = 11 % 5; 
	printf("div = %d, mod = %d\n", div, mod);

	div = 11 / -5; 
	mod = 11 % -5; 
	printf("div = %d, mod = %d\n", div, mod);

	div = -11 / -5; 
	mod = -11 % -5;
	printf("div = %d, mod = %d\n", div, mod);

	div = -11 / 5;
	mod = -11 % 5;
	printf("div = %d, mod = %d\n", div, mod);

	return 0;
}
