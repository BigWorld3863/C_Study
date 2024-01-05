#define _CRT_SECURE_NO_WARNINGS // run in VS
#include<stdio.h>
#include <string.h>

void fit_str(char*, unsigned int);
void my_strcat(char*, char*);
int my_strcmp(char*, char*);
void my_strcpy(char* str1, char* str2);
int skilled_strcmp(const char* X, const char* Y);

int main()
{	
	/*
		strlen() : returns lengths of the string.
	*/
	
	//TODO: use debugger
	//char msg[] = "Just,"" do it!";
	//puts(msg);
	//printf("Length %zu\n", strlen(msg));
	//fit_str(msg, 4);
	//puts(msg);
	//printf("Length %zu\n", strlen(msg));

	/*
		strcar() amd strncat() : string concatenation
	*/

	char str1[100] = "First string";
	char str2[] = "Second string";

	/*strcat(str1, ", ");
	strcat(str1, str2);*/
	//strncat(str1, str2, 2);		//append 2 characters
	//puts(str1);

	//TODO: implement my_strcat() function!
	//my_strcat(str1, str2);
	//puts(str1);

	/*
		stcmp() and strncmp() : compare strings (not characters)
	*/

	//printf("%d\n", strcmp("A", "A"));
	//printf("%d\n", strcmp("A", "B"));
	//printf("%d\n", strcmp("B", "A"));
	//printf("%d\n", strcmp("Hello", "Hello"));
	//printf("%d\n", strcmp("Banana", "Bananas"));
	//printf("%d\n", strcmp("Bananas", "Banana"));
	//printf("%d\n", strncmp("Bananas", "Banana", 6));
	//printf("\n");
	//TODO: implement strcmp!
	//printf("%d\n", my_strcmp("A", "A"));
	//printf("%d\n", my_strcmp("A", "B"));
	//printf("%d\n", my_strcmp("B", "A"));
	//printf("%d\n", my_strcmp("Hello", "Hello"));
	//printf("%d\n", my_strcmp("Banana", "Bananas"));
	//printf("%d\n", my_strcmp("Bananas", "Banana"));
	//printf("\n");
	//printf("%d\n", skilled_strcmp("A", "A"));
	//printf("%d\n", skilled_strcmp("A", "B"));
	//printf("%d\n", skilled_strcmp("B", "A"));
	//printf("%d\n", skilled_strcmp("Hello", "Hello"));
	//printf("%d\n", skilled_strcmp("Banana", "Bananas"));
	//printf("%d\n", skilled_strcmp("Bananas", "Banana"));

	/*
		strcpy() and strncpy()
	*/

	char dest[100] = "";	// make sure memory is enough
	char source[] = "Start programming!";
	////dest =  source;	//Error
	////dest = "Start something!"; //Error	
	//strcpy(dest, source);
	//strncpy(dest, source, 5);	// '\0' is NOT added
	////strcpy(dest, source + 6);
	////strcpy(dest, source);
	////strcpy(dest + 6, "coding!");
	//puts(dest);
	// 
	//my_strcpy(dest, source);
	//puts(dest);
	
	/*
		sprintf()
	*/

	//char str[100] = "";
	//int i = 123;
	//double d = 3.14;
	//sprintf(str, "%05d.png %f", i, d);
	//puts(str);
	//// capture00000,png, capture00001.png, ...

	/*
		There are more functions...
	*/
	printf("%s\n", strchr("Hello, World", 'W'));

	printf("%s\n", strpbrk("Hello, World", "ABCDE"));
	printf("%s\n", strpbrk("Hello, World", "abcde"));

	printf("%s\n", strrchr("Hello, world, Hello, World", 'l'));// last occurrence

	printf("%s\n", strstr("Hello, World", "wor"));
	printf("%s\n", strstr("Hello, World", "Wor"));

	return 0;
}

void fit_str(char* str, unsigned int size) 
{
	if (strlen(str) > size)
		str[size] = '\0';
}

void my_strcat(char* str1, char* str2)
{
	int start_point = (strlen(str1));
	int end_point = strlen(str2);

	for (int i = 0; i <= end_point; i++)
		str1[start_point + i] = str2[i];
}

int my_strcmp(char* str1, char* str2)
{
	int s1 = strlen(str1);
	int s2 = strlen(str2);
	int leng;

	if (s1 > s2)	
		leng = s1;
	else
		leng = s2;

		for (int i = 0; i < leng; i++)
		{
			if (str1[i] > str2[i])
				return 1;
			else if (str1[i] < str2[i])
				return -1;
		}
		return 0;
}

void my_strcpy(char* dest, char* source)
{
	for (int i = 0; *(source + i) != '\0'; i++)
		*(dest + i) = *(source + i);
}

int skilled_strcmp(const char* X, const char* Y)	//techie delight
{
	while (*X)
	{
		// if characters differ, or end of the second string is reached
		if (*X != *Y) {
			break;
		}

		// move to the next pair of characters
		X++;
		Y++;
	}

	// return the ASCII difference after converting `char*` to `unsigned char*`
	return *(const unsigned char*)X - *(const unsigned char*)Y;
}