#include <stdio.h>

void swap(int *u, int *v)	//call by pointer
{	
	printf("%p %p\n", u, v); 
	
	int temp = *u; //redirection
	*u = *v;
	*v = temp;
}

int main()
{
	int a = 123;
	int b = 456;
	
	printf("%p %p\n", &a, &b);
	
	swap(&a, &b);
	
	printf("%d %d", a, b);

	return 0;
}