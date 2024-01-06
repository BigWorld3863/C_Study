#include <stdio.h>
#include <string.h> // strcmp()

void swap(char** xp, char** yp);	//Note: Optional
void printStringArray(char* arr[], int size);
void selectionSort(char* arr[], int n);

int main()
{
	char* arr[] = { "Cherry", "AppleBee", "Pineapple", "Apple", "Orange"};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printStringArray(arr, n);
	selectionSort(arr, n);
	printStringArray(arr, n);
	
	
	return 0;
}

void swap(char** xp, char** yp)
{
	char* temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printStringArray(char* arr[], int size) 
{
	for (int i = 0; i < size; i++)
		printf("%s ", *(arr + i));
	printf("\n");
}

//void selectionSort(char* arr[], int n)	// My code
//{
//	char* pt_addr = NULL;
//
//	for (int i = 0; i < (n - 1); i++)
//	{	
//		pt_addr = *(arr + i);
//
//		for (int j = i + 1; j < n; j++)
//		{
//			if (strcmp(pt_addr, *(arr + j)) == 1)
//			{
//				pt_addr = *(arr + j);
//				*(arr + j) = *(arr + i);
//				*(arr + i) = pt_addr;
//			}
//		}
//	}
//}

void selectionSort(char* arr[], int n)	// in Lecture
{
	int min_idx;

	for (int i = 0; i < (n - 1); i++)
	{
		// One by one move boundary of unsorted subarray
		min_idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(arr[j], arr[min_idx]) < 0)
			{
				min_idx = j;
			}
		}

		// Swap the found minimum element with the first element
		/* 
		char* temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
		*/
		swap(&arr[i], &arr[min_idx]);
	}
}