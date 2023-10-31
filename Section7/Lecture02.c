#include <stdio.h> // getchar(), putchar()

int main()
{
	/*	
		1. Introduce getchar(), putchar()
		2. Use while loop to process character sequences
		3.Filter a specific character
		4. Convert numbers to asterisks
		5. Lower characters to Upper characters
	*/
	
	char ch;
	
	while ((ch = getchar()) != '\n') // Use '\n' to find the end of a sentence
	{
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		
		else if (ch >= 'A' && ch <= 'Z')
			ch += 32;

		putchar(ch);
	}
	
	putchar(ch);

	return 0;
}