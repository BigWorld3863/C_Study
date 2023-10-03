#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
	// // round-off errors (ex1)
	// float a, b;
	// a = 1.0E20f + 1.0f;
	// b = a - 1.0E20f;
	// printf("%f\n", b);
	
	// // round-off errors(ex2)
	// float  a = 0.0f;
	// int b = 0;
	
	// for(int x = 0; x < 100; x++)
	// {
	// 	a = a + 0.01f;
	// 	b = b + 1;
	// }
	// printf("%f %d\n", a, b);
	
	// // overflow
	// float max = 3.402823466e+38F;
	// printf("%f\n", max);
	// max = max * 100.0f;
	// printf("%f\n", max);
	
	// // underflow
	// float f = 1.401298464e-45F;
	// printf("%e\n", f);
	// f = f / 2.0f; // subnormal
	// printf("%e\n", f);
	
	// // divided into 0
	// float f = 104.0f;
	// printf("%f\n", f);
	// f = f / 0.0f;
	// printf("%f\n", f);
	
	float f = asinf(1.0f); // undefined reference to 'asinf' in goormide
	printf("%f\n", f);
	
	f = asinf(2.0f);
	printf("%f\n", f);
	
	return 0;
}