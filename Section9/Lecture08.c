#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);


int main()
{
	int num = 3;
	
	printf("%ld\n", loop_factorial(num));
	printf("%ld\n", recursive_factorial(num));
	
	return 0;
}

long loop_factorial(int n)
{
	int x;
	
	for (x = 1; n > 1; n--)
		x *= n;
	
	return x;
}

long recursive_factorial(int n)
{
	if (n > 1)
		return n * recursive_factorial(n - 1); //tail (end) recursion
	else
		return 1;
}