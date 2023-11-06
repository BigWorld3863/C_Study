// Logical Operators
#include <stdio.h>
#include <ctype.h>	// islower()
#include <stdbool.h>
#include <iso646.h>	// and, or, not

#define PERIOD '.'

int main()
{
	// bool test1 = 3 > 2 || 5 > 6;	// true
	// bool test2 = 3 > 2 && 5 > 6;	// false
	// bool test3 = !(5 > 6);			// true , equivalent to 5 <= 6
	
	//printf("%d %d %d\n", test1, test2, test3);
	
	// Character counting example
	
	// char ch;
	// int count = 0;
	
	// while ((ch = getchar()) != PERIOD)
	// {
	// 	if (ch != '\n' && ch != ' ')
	// 		count++;
	// }

	// printf("%d\n", count);
	
	/*
		Precedence
		
		https://en.cppreference.com/w/c/language/operator_precedence
	*/
	
	// int a = 1, b = 2, c = 3, d = 4;
	
	// a > b && b > c || b > d;
	// ((a > b) && (b > c)) || (b > d);
	
	/*
		Short-circuit Evaluaion
		
		- Logical expressions are evaluated from left to right
		- && and || are sequence points 
	*/

	// int temp = (1 + 2) * (3 + 4);
	
	// printf("Before : %d\n", temp);
	
	// if (temp == 0 && (++temp == 1024))
	// {
	// 	// do nothing
	// }
	
	// printf("After : %d\n", temp);
	
	int x = 1, y = 2;
	if (x++ > 0 && x + y == 4) // && is sequence point
		printf("%d %d\n", x, y);
	
	
	return 0;
}