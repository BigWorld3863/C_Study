// Nested loops
#include <stdio.h>

#define NUM_ROWS	12
#define FIRST_CHAR	'A'
#define LAST_CHAR	'L'

int main()
{	
	// exercise 1
	
	// my code
	
	// char first_char = 'A';
	// char last_char = '\0';
	// unsigned repeated_time = 0;
	
	// printf("Input last char you want: ");
	// scanf("%c", &last_char);
	
	// printf("Enter how many times you want to repeat: ");
	// scanf("%d", &repeated_time);
	
	// for (int i = 0; i < repeated_time; i++)
	// {	
	// 	while (first_char <= last_char)
	// 	{
	// 		printf("%c ", first_char);
	// 		first_char++;
	// 	}
		
	// 	first_char = 'A';
	// 	printf("\n");
	// }
	
	// in lecture
	
	int r; // row loop
	int c; // character loop
	
	// for (r = 0; r < NUM_ROWS; r++) // outer row loop
	// {	
	// 	for (c = FIRST_CHAR; c <= LAST_CHAR; c++) // inner character loop
	// 		printf("%c ", c);
		
	// 	printf("\n");
	// }
	
	// exercise 2
	
	// my code
	
	// int rows = LAST_CHAR - FIRST_CHAR + 1;
	// char last_char = FIRST_CHAR;
	
	// for (r = 0; r < rows; r++) // outer row loop
	// {	
	// 	for (c = FIRST_CHAR; c <= last_char; c++)
	// 		printf("%c ", c);

	// 	last_char++;
	// 	printf("\n");
	// }
	
	// my code 2
	
	// for (r = FIRST_CHAR; r <= LAST_CHAR; r++)
	// {
	// 	for (c = FIRST_CHAR; c <= r; c++)
	// 		printf("%c ", c);
		
	// 	printf("\n");
	// }

	// in lecture

	// for (r = 0; r <= NUM_ROWS; ++r)
	// {
	// 	for (c = FIRST_CHAR; c <= FIRST_CHAR + r; ++c)
	// 		printf("%c ", c);
		
	// 	printf("\n");
	// }

	// exercise 3
	
	// my code
	
	// for (r = FIRST_CHAR; r <= LAST_CHAR; r++)
	// {
	// 	for (c = r; c <= LAST_CHAR; c++)
	// 		printf("%c ", c);
		
	// 	printf("\n");
	// }
	
	// in lecture
	
	for (r = 0; r <= NUM_ROWS; ++r)
	{
		for (c = FIRST_CHAR + r; c <= FIRST_CHAR + NUM_ROWS; ++c)
			printf("%c ", c);
		
		printf("\n");
	}
	
	return 0;
}