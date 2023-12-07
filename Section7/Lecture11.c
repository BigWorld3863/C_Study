#include <stdio.h>
#include <ctype.h>
#include <float.h>

int main()
{
	//My code
	// double num[100];
	// double sum = 0.;
	// double min = 0., max = 0.;
	
	// int i = 0;
	
	// for ( ; (scanf("%lf", &num[i])) != 0; i++)
	// {
	// 	if (i == 0)
	// 	{
	// 		min = num[i];
	// 		max = num[i];
	// 		sum += num[i];
			
	// 		continue;
	// 	}
		
	// 	if (min > num[i]) // consider using conditional operator
	// 		min = num[i];
		
	// 	if (max < num[i])
	// 		max = num[i];
		
	// 	sum += num[i];
	// }
	
	// printf("min = %.6f. max = %.6f. ave = %.6f.\n", min, max, sum / i);

	float max = FLT_MIN;
	float min = FLT_MAX;
	float sum = 0.0f; 
	float input;
	int n = 0;
	
	while ((scanf("%f", &input)) == 1)
	{
		if (input < 0.0f || input > 100.0f)
			continue;
		
		max = max < input ? input : max;
		min = min > input ? input : min;
		sum += input;
		
		n ++;
	}
	
	if (n > 0)
		printf("min = %.6f. max = %.6f. ave = %.6f.\n", min, max, sum / n);
	
	else
		printf("No input\n");
	
	return 0;
}