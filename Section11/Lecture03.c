#include <stdio.h>

int main()
{
	// Arrays of Character Strings
	
	const char* mythings[5] = {
		"Dancing in the rain",
		"Counting apples",
		"Watching movies with friends",
		"Writing sad letters",
		"Studying the C language",
	};
	
	char yourthings[5][40] = {
		"Studying the C++ language",
		"Eating",
		"Watching Netflix",
		"Walking around till dark",
		"Deleting spam emails"
	};
	
	const char* temp1 = "Dancing in the rain";
	const char* temp2 = "Studying the C++ language";
	
	printf("%s %llu %llu\n", mythings[0], (unsigned long long)mythings[0], (unsigned long long)temp1);
	printf("%s %llu %llu\n", yourthings[0], (unsigned long long)yourthings[0], (unsigned long long)temp2);
	printf("%llu %llu\n", (unsigned long long)&yourthings[0][0], (unsigned long long)temp2);
	printf("\n");
	
	printf("%-30s %-30s\n", "My Things: ", "Your Things: ");
	for (int i = 0; i < 5; i++)
		printf("%-30s %-30s\n", mythings[i], yourthings[i]);
	
	printf("\nsizeof mythings %zd, sizeof yourthings %zd\n", sizeof(mythings), sizeof(yourthings));
	
	for (int i = 0; i < 100; i++)
		printf("%c", (int)mythings[0][i]);
	printf("\n");
	printf("\n");
	
	for (int i = 0; i < 200; i++)
		printf("%d", (int)yourthings[0][i]);
	printf("\n");
	printf("\n");
	
	for (int i = 0; i < 200; i++)
		printf("%c", (int)yourthings[0][i]);
	printf("\n");
	printf("\n");
	
	// Not a good idea to take advantage of this property
	
	return 0;
}