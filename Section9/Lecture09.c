#include <stdio.h>

void printf_binary(unsigned long n);
void printf_binary_loop(unsigned long n);

int main()
{
	unsigned long num = 10;
	
	printf_binary_loop(num);
	printf_binary(num);
	
	printf("\n");
	return 0;
}

void printf_binary(unsigned long n)
{
	if (n != 0)
	{
		printf_binary(n / 2);
		printf("%d", n % 2);
	}
}

void printf_binary_loop(unsigned long n)
{
	int x[100];
	int count = 0;
	for ( ; n != 0; n /= 2)
	{
		x[count] = n % 2;
		count++;
	}

	for (count--; count >= 0; count--)
		printf("%d", x[count]);

	printf("\n");
}