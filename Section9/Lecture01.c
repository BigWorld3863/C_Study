// function
#include <stdio.h>
#include <string.h>	//strlen()

#define WIDTH 30
#define NAME "Sung-Hyun Shin"
#define ADDRESS "Seoul, Korea"

void print_multiple_chars(char c, int n_stars);// prototype
void print_cantered_str(char str[]);

int main()
{
	print_multiple_chars('*', WIDTH);// argument, actual (argument/parameter)
	
	print_cantered_str(NAME);
	print_cantered_str(ADDRESS);
	print_cantered_str("I love you");
	
	print_multiple_chars('*', WIDTH);
	
	return 0;
}

void print_multiple_chars(char c, int n_stars)// parameter, formal (argument/parameter)
{
	for (int i= 0; i < n_stars; i++)
		printf("%c", c);
	
	if (c != ' ')
		printf("\n");
}

void print_cantered_str(char str[])
{
	int n_blanks = 0;
	
	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_chars(' ', n_blanks);
	printf("%s\n", str);
}