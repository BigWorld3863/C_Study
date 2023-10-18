// do while
#include <stdio.h>

int main()
{
	const int password = 337;
	int guess = 0;
	
	// printf("Enter secret code : ");
	// scanf("%d", &guess);
	
	// while (password != guess)
	// {
	// 	printf("Enter secret code : ");
	// 	scanf("%d", &guess);
	// }
	
	do
	{
		printf("Enter secret code : ");
		scanf("%d", &guess);	
	}
	while (password != guess);
	
	
	
	printf("Good!\n");
	
	return 0;
}