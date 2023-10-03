#include <stdio.h>

int main()
{
	char fruit_name[40]; 
	
	printf("What is your favorite fruit?\n");
	
	scanf("%s", fruit_name); // be careful with &
	
	printf("You like %s!\n", fruit_name);
	
	
	
	return 0;
}