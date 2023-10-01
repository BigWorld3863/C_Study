#include <stdio.h>
#include <limits.h>
#include <stdlib.h>


int main()
{
	unsigned int u_max = UINT_MAX;
	// unsigned int u_min = 0;
	// signed int i_max = INT_MAX;
	// signed int i_min = INT_MIN;
	
	// printf("max of uint = %u\n", u_max);
	// printf("min of uint = %u\n", u_min);
	// printf("max of int = %d\n", i_max);
	// printf("min of int = %d\n", i_min);
	
	// i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2); // Undefined reference to '_itoa' in goormIDE. Use VS instead.
	
	//print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);
	
	return 0;
}