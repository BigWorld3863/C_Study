#include <stdio.h>

int main()
{
	float sed_m = 0;	
	float tar_m = 0;
	float an_int = 0;
	int counter = 0;
	
	printf("Input seed money : ");
	scanf("%f", &sed_m);
	
	printf("Input target money : ");
	scanf("%f", &tar_m);
	
	printf("Input annual interest (%%) : ");
	scanf("%f", &an_int);
	
	// double fund = sed_m; in lecture

	while (sed_m < tar_m)
	{	
		sed_m = sed_m * (an_int + 100) / 100;
		counter = counter + 1;
		printf("%f\n", sed_m);	
		
	}
	
	printf("It takes %d years\n", counter);
	
	
	return 0;
}