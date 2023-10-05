// Modifiers of conversion specifier

#include <stdio.h>
#include <limits.h> 

int main()
{
	// %[flags][width][.precision][length]specifier
	printf("Flags and width\n");
	printf("%10i\n", 1234567);
	printf("%-10i\n", 1234567);
	printf("%+i %+i\n", 123, -123);
	printf("% i\n% i\n", 123, -123);
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);
	
	printf("\nPrecision\n");
	// printf("%.3d\n", 1024);
	// printf("%.5d\n", 1024);
	// printf(".3f\n", 123456.1234567);
	// printf(".3f\n", 123456.1235);
	// printf("10.3f\n", 123.45678);
	// printf("\n",);
	// printf("\n",);
	// printf("\n",);
	
	
		// tomorrow think about:
		printf("%-010i\n", 1234567);
		printf("%0+10.5hi", 256);
	return 0;
}