// Arguments & Parameters
#include <stdio.h>

void draw(int n); // ANSI function prototype declaration

int main()
{
	int i = 5;
	char c = '#'; // 35
	float f = 7.1f;
	
	draw(i);
	draw((int)c);
	draw((int)f);

	// Arguments vs Parameters
	
	
	return 0;
}

void draw(int n)
{
	// int x = 0;
	
	// while (x < n)
	// {
	// 	printf("*");
	// 	x++;
	// }
	
	while (n-- > 0)
		printf("*");
	
	printf("\n");
}