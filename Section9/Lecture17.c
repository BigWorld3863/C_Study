#include <stdio.h>

void main()
{
	char a = 1;
	float b = 3;
	double c = 5;

	char* ptr_a = &a;
	float* ptr_b = &b; 
 	double* ptr_c = &c;

	a = 2;
	b = 4;
	c = 6;

	printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));				//1 4 8
	printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));	//8 8 8
	printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));			//8 8 8
	printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*));//8 8 8
}