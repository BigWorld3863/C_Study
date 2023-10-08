#include <stdio.h>

int main()
{
	
	//tomorrow finish this: 
	float sed_m = 0;
	float tar_m = 0;
	float an_int = 0;
	
	printf("Input seed money : ");
	scanf("%f", &sed_m);
	printf("Input target money : ");
	scanf("%f", &tar_m);
	printf("Input annual interest (%%) : ");
	scanf("%f", &an_int);
	
	while (sed_m < tar_m)
	{
		sed_m = sed_m * (an_int + 100) / 100;
		printf("%f\n", sed_m);
		
		
	}
	
	
	
	
	return 0;
}