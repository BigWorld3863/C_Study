#include <stdio.h>

int main()
{
	int hours = 0, minutes = 0, seconds = 0;
	
	while (seconds >= 0)
	{
		printf("Input seconds : ");
		scanf("%d", &seconds);

		hours = seconds / 3600;
		seconds %= 3600;

		minutes = seconds / 60;
		seconds %= 60;
	
		printf("%d hours, %d minutes, %d seconds\nGood bye\n\n", hours, minutes, seconds);
	}
	
	return 0;
}
