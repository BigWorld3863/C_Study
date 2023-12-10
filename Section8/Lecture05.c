#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	char c;
	int rows, cols;
	
	// while (1)
	// {
	// 	scanf("%c %d %d", &c, &rows, &cols);
	// 	display(c, rows, cols);
		
	// 	getchar();
		
	// 	if (c == '\n')
	// 		break;	//doesn't work well
	// }
	
	printf("Input one character and two integers: ");
	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		display(c, rows, cols);
		
		getchar();
		
		printf("Input another character and two integers: \n");
		printf("Press enter to quit.\n");
	}

	return 0;
}

void display(char cr, int lines, int width)
{
	for (int x = 0; x < lines; x++)
	{
		for (int y = 0;  y < width; y++)
			printf("%c", cr);

		printf("\n");
	}
}