#define _CRT_SECURE_NO_WARNINGS // run in VS
#include<stdio.h>

#define TEST "A string from #define."

/*
TODO:
	puts() which doesn't add a new line at the end
	Use pointer increment operator and putchar()
*/
void custom_put(const char* str);	// Only two lines
int custom_put2(const char* str);	// Add \n, return # of characters


int main()
{
	/*
		puts() : add \n at the end
	*/

	//char str[60] = "String array initialized";
	//const char* ptr = "A pointer initialized";

	//puts("String without \\n");
	//puts("END");
	//puts(TEST);
	//puts(TEST + 5);
	//puts(&str[3]);
	////puts(str[3]); // Error
	//puts(ptr + 3);

	///*
	//	string without \0
	//*/

	//char str[] = { 'H', 'I', '!' }; // No \0 at the end.
	//puts(str);	//VS warn you!

	/*
		puts() and fputs()
	*/

	//char line[100];
	//while (gets(line))		// while (gets(line)!= NULL)
	//	puts(line);

	//char line2[100];
	//while (fgets(line2, 100, stdin))		// while (gets(line)!= NULL)
	//	fputs(line2, stdout);

	/*
		printf()
	*/

	//char str[] = "Just do it, do it!";
	//printf("%s\n", str);	// \n added
	//puts(str);

	//char input[100] = "";
	//int ret = scanf("%10s", input); // Input : "Just do it, do it!\n" (Note %10s)
	//printf("%s\n", input);			// Output : "Just"
	//ret = scanf("%10s", input);		// Reads remaning buffer
	//printf("%s\n", input);			// Output : "do"

	/*
		Custom function
	*/
	//char arr[30] = "Hello world I'm here";
	//custom_put(arr);
	//printf("\\n check");
	 
	//int c = custom_put2(arr);
	//printf("\\n check and the number of the characters: %d", c);

	custom_put("Just ");
	custom_put("do it!");

	printf("%d\n", custom_put2("12345"));


	return 0;
}

void custom_put(const char* str)
{
	/*for (int i = 0; *(str + i) != '\n' && *(str + i) != '\0'; i++)
		putchar(*(str + i));*/

	while (*str != '\0') // while(*str)
		putchar(*str++);
}

int custom_put2(const char* str)
{	
	/*int count; 

	for (count = 0; *(str + count) != '\n' && *(str + count) != '\0'; count++)
		putchar(*(str + count));
	putchar('\n');*/

	int count = 0;
	while (*str != '\0') // while(*str)
	{
		putchar(*str++);
		count++;
	}
	putchar('\n');

	return count;
}