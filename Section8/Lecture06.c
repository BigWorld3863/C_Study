#include <stdio.h>

long get_long(void);

int main()
{
	int num_flags = 0;
	
	printf("Please input a number between 1 and 100.\n");

	long number = get_long();
	
	while (num_flags == 0)
	{
		if (number > 1 && number < 100)
		{
			printf("Your input %ld is between 1 and 100. Thank you.\n", number);
			num_flags = 1; //use flags or break;
		}
		
		else
		{
			printf("Please input number between 1 and 100.\n");
			number = get_long();
		}
	}
	
	return 0;
}

long get_long(void)
{
	long input;
	char c;
	
	printf("Please input an integer and press enter. \n");
	
	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");
		
		while ((c = getchar()) != '\n')
			putchar(c);
		
		printf(" - is not an integer. Please try again.\n");
	}
	
	printf("your input %ld is an integer.\n", input);
	
	return input;
}