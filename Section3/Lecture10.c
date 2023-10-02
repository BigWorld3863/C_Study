#include <stdio.h>

int main()
{
	char c = 'A'; // char c = 65; char c = 0101; char c = 0x41;
	char d = '*';

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);
	
	printf("%c \n", c + 1);
	
	char a = '\a';
	printf("%c", a);
	
	printf("\07"); // \7
	printf("\x7");
	
	printf("\x23");
	
	float salary;
	printf("$______");
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary);
	
	printf("AB\tCDEF\n");
	printf("ABC\tDEF\n");
	
	printf("\\ \'HA+\' \"Hello\" \?\n");
	
	return 0;
}