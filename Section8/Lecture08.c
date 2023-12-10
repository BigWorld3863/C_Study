//refer to the lecture
#include <stdio.h>
#include <stdlib.h>

int get_choice(void);
void count(void);

int main()
{	
	//My code
	//int num;
	//int end_flags = 0;

	//while (end_flags == 0)
	//{
	//	printf("enter the letter of your choice:\n");
	//	printf("a. avengers\tb. beep\nc. count\tq. quit\n");

	//	char c = getchar();

	//	switch (c)
	//	{
	//	case 'a':
	//		printf("Avengers assemble!\n");
	//		break;

	//	case 'b':
	//		printf("\a");
	//		break;

	//	case 'c':
	//		printf("Enter an integer:");

	//		scanf("%d", &num);

	//		for (int n = 1; n <= num; n++)
	//			printf("%d\n", n);

	//		break;
	//	case 'q':
	//		end_flags = 1;
	//		break;

	//	default:
	//		printf("Please enter the correct input value.\n");
	//		break;
	//	}
	//	while (getchar() != '\n')
	//		continue;
	//}
	
	int user_choice;

	while ((user_choice = get_choice()) != 'q')
	{
		switch (user_choice)
		{
		case 'a':
			printf("avengers assemble!\n");
			break;

		case 'b':
			printf("\a");
			break;

		case 'c':
			count();
			break;

		default:
			printf("Error with %d.\n", user_choice);
			exit(1);
			break;
		}
	}
	
	return 0;
}

int get_choice(void) 
{
	printf("enter the letter of your choice:\n");
	printf("a. avengers\tb. beep\nc. count\tq. quit\n");

	char c;
	
	while (1)
	{
		c = getchar();
		
		while (getchar() != '\n')
		continue;
		
		if (c == 113)
			break;
		
		else if (c >= 97 && c <= 99)
			break;
		
		printf("Please try again.\n");
	}

	return c;
}

void count(void)
{
	int num;

	printf("enter an integer:");

	while (scanf("%d", &num) != 1)
	{
		printf("Please input integer.\n");
		
		while (getchar() != '\n')
			continue;
	}
	for (int n = 1; n <= num; n++)
		printf("%d\n", n);
	
	getchar();
}