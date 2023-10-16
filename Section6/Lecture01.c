// Return value of scanf() func + scanf grammar

#include <stdio.h>

int main()
{
	// My code
	
	// int num = 0, sum = 0, status = 1;
	
	// printf("Enter an integer (q to quit) : ");
	// scanf("%d", &num);
	
	// sum = sum + num;
	
	// while (status == 1)
	// {
	// 	printf("Enter next integer (q to quit) : ");
	// 	// int status = scanf("%d", &num); The reason for the error
	// 	status = scanf("%d", &num);
		
	// 	if (status == 1)
	// 		sum = sum + num;
	// }
	
	// printf("Sum = %d\n", sum);
	
	
	// In lecture(improved)
	
	// int num = 0, sum = 0;
	// int status;
	
	// printf("Enter an integer (q to quit) : ");
	
	// status = scanf("%d", &num); // return value of scanf()
	
	// while (status == 1) 
	// {
	// 	sum = sum + num;
		
	// 	printf("Enter next integer (q to quit) : ");
	// 	status = scanf("%d", &num);
	// 	// sum = sum + num; compare this code on 41 line vs 45 line and know principle of scanf() operation
	// }
	
	// printf("Sum = %d\n", sum);
	
	
	// In lecture(C-style shortcut)
	
	int num = 0, sum = 0;
	
	printf("Enter an integer (q to quit) : ");
	
	while (scanf("%d", &num) == 1)
	{
		sum = sum + num;
		
		printf("Enter next integer (q to quit) : ");
	}
	
	printf("Sum = %d\n", sum);
	
	return 0;
}