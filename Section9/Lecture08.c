#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);


int main()
{
	int num = 5;
	
	printf("%ld\n", loop_factorial(num));
	printf("%ld\n", recursive_factorial(num));
	
	return 0;
}

long loop_factorial(int n)
{
	int x = 1;
	
	for ( ; n >= 1; n--)
		x *= n;
	
	return x;
}

long recursive_factorial(int n)
{

	
}