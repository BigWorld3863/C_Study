// Loop
#include <stdio.h>

int main()
{
	int  n = 1;
// classic C
/* 
label:
	printf("%d\n", n);
	n = n + 1;
	
	if(n > 10) goto out;
	
	goto label;

out:	
	*/
	
	while (n < 11)
	{
		printf("%d\n", n);
		n = n + 1;		
	}
	
	// for (int x = 0; x < 10; x++)
	// {
	// 	printf("%d\n", x + 1);
	// }

	return 0;
}