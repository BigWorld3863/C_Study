// Nested loops
#include <stdio.h>

int main()
{
	char first_char = 'A';
	char last_char = '\0';
	unsigned repeated_time = 0;
	
	printf("Input last char you want: ");
	scanf("%c", &last_char);
	
	printf("Enter how many times you want to repeat: ");
	scanf("%d", &repeated_time);
	
	for (int i = 0; i < repeated_time; i++)
	{	
		while (first_char <= last_char)
		{
			printf("%c ", first_char);
			first_char++;
		}
		
		first_char = 'A';
		printf("\n");
	}
	
	return 0;
}