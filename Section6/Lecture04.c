// Relational Operators

#include <stdio.h>
#include <math.h>		//fabs()

int main()
{
	/*
		Relational Operators
		<
		<=
		==
		>=
		.
		!=
	*/
	
// 	int n = 0;
// 	while (n++ < 5)		// n++ < 5 is a relational expression
// 		printf("%d", n);
	
// 	printf("\n");	  
	
// 	char c = 'A';
// 	while (c != 'Z')
// 		printf("%c", c++);
	
	const double PI = 3.1415926536897932384626;
	double guess = 0.0;
	
	printf("Input PI : ");
	scanf("%lf", &guess);
	// while (guess != PI)
	while (fabs(guess - PI) > 0.01)
	{
		printf("Fool! try again.\n");
			scanf("%lf", &guess);
	}
	
	printf("Good!\n");
	
	return 0;
}