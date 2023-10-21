// loops with return value of function
#include <stdio.h>

int compute_pow(int base, int exp);

int main()
{
	int base, exp, result;
	
	while (scanf("%d %d", &base, &exp) == 2)
	{
		result = compute_pow(base, exp);
		
		printf("%d\n", result);
	}
	return 0;
}

int compute_pow(int base, int exp)
{	
	int result;
 
	result =1;
	for (int i = 0; i < exp; i++)
		result *= base;
	
	return result;
}