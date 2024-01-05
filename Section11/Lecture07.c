//Selection Sort
#include <stdio.h>

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);

int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	selectionSort(arr, n);
	printArray(arr, n);
	
	return 0;
}

void swap(int* xp, int* yp)
{
	int temp;
	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void selectionSort(int arr[], int n)
{
	for (int i = 0; i < (n - 1); i++)
	{	//min_idx
		for (int j = i; j < n; j++)	// j = i + 1 more effective
		{
			if (arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
		}
	}
}