#include <stdio.h>
//#include <conio.h>	//Windows, _getch(), _getche() unusable on gcc compiler

int main()
{
	char c;
	
	while ((c = getchar()) != '.')
		putchar(c);
	
	retrun 0;
}