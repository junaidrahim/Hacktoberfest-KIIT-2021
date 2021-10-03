/* C implementation QuickSort */
#include<stdio.h> 
#include<stdlib.h>

void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high]; 
	int i = (low - 1); 

	for (int j = low; j <= high- 1; j++) 
	{ 

		if (arr[j] < pivot) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[high]); 
	return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
        if((high-low)>5){
            swap(&arr[rand() % (high-low+1)+low],&arr[low]);
        }  
		int pi = partition(arr, low, high); 

		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 

void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() 
{ 
    int array[10];

    for(int i = 0;i<10;i++)
    {
        array[i] = rand() % 100 +1;
    }
	int n = sizeof(array)/sizeof(array[0]);
    printf("Array: \n"); 
    printArray(array, n);  
	quickSort(array, 0, n-1); 
	printf("Sorted array: \n"); 
	printArray(array, n); 
	return 0; 
} 
