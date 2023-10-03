#include <stdio.h>
#include <complex.h>

int main()
{	
	// // VS code
	// _Dcomplex z;
	// z.Val[0] = 1.0;
	// z.Val[1] = 1.0;
	
	// gcc code
	// double _Imaginary i = 3;
	double _Complex z = 1 + 2*I;
	
	z = 1 / z;
	
	printf("1 / (1.0 + 2.0i) = %.1f%+.1fi\n", creal(z), cimag(z));
	
	return 0;
}