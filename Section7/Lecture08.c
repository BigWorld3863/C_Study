#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define PERIOD '.'

int main()
{
	// char ch = 0;
	
	// int cnt = 0, cnt_words = 0, cnt_lines = 1;
	// int word_flag = 0;
	
	// printf("Enter text : \n");
	
	// while ((ch = getchar()) != PERIOD)
	// {	
	// 	if (word_flag)
	// 	{
	// 		if (ch == ' ' || ch == '\n')
	// 		{
	// 			cnt_words--;
	// 			word_flag = 0;
	// 		}
			
	// 		else
	// 			word_flag = 0;
	// 	}
		
	// 	if (ch != ' ' && ch != '\n')
	// 		cnt++;
		
	// 	// Q. how to count words???
	// 	// A. make a flag
		 
	// 	else if (ch == ' ' || ch == '\n')
	// 	{
	// 		cnt_words++;
	// 		word_flag = 1;
	// 	}

	// 	if (ch == '\n')
	// 		cnt_lines++;
	 
	// }
	
	// printf("Characters = %d, Words = %d, Lines = %d\n", cnt, cnt_words, cnt_lines);
	
	char c;
	int n_chars = 0;
	int n_lines = 0;
	int n_words = 0;
	bool word_flag = false;
	bool line_flag = false;
	
	printf("Enter text : \n");
	
	while ((c = getchar()) != PERIOD)
	{
		if (!isspace(c)) // isspace() checks whether the passed character is white-space. (' ', '\n', '\t', etc ...)
			n_chars++;
		
		if (!isspace(c) && !line_flag)
		{
			n_lines++;
			line_flag = true;
		}
			
		if (c == '\n')
			line_flag = false;
	
		if (!isspace(c) && !word_flag)
		{
			n_words++;
			word_flag = true;
		}
		
		if (isspace(c)) //c == ' ' || c == '\n'
			word_flag = false;
		
	}
	
	printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);
	
	return 0;
}