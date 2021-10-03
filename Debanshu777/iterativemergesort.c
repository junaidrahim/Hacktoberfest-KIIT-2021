#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

// Utility function to find minimum of two numbers
int min(int x, int y)
{
	return (x < y) ? x : y;
}

// Merge two sorted subarrays A[from .. mid] and A[mid + 1 .. to]
void merge(int A[], int temp[], int from, int mid, int to)
{
	int k = from, i = from, j = mid + 1;

	// loop till there are elements in the left and right runs
	while (i <= mid && j <= to)
	{
		if (A[i] < A[j])
			temp[k++] = A[i++];
		else
			temp[k++] = A[j++];
	}

	// Copy remaining elements
	while (i < N && i <= mid)
		temp[k++] = A[i++];

	// Don't need to copy second half

	// copy back to the original array to reflect sorted order
	for (int i = from; i <= to; i++)
		A[i] = temp[i];
}

// Iteratively sort array A[low..high] using temporary array
void mergesort(int A[], int temp[], int low, int high)
{
	// divide the array into blocks of size m
	// m = [1, 2, 4, 8, 16...]
	for (int m = 1; m <= high - low; m = 2*m)
	{
		// for m = 1, i = 0, 2, 4, 6, 8
		// for m = 2, i = 0, 4, 8
		// for m = 4, i = 0, 8
		// ...
		for (int i = low; i < high; i += 2*m)
		{
			int from = i;
			int mid = i + m - 1;
			int to = min(i + 2*m - 1, high);

			merge(A, temp, from, mid, to);
		}
	}
}

// Utility function to print a given array
int printArray(int A[])
{
	for (int i = 0; i < N; i++) {
		printf("%d ", A[i]);
	}

	printf("\n");
}

// Implement Iterative Merge Sort
int main()
{
	int A[N], temp[N];
	srand(time(NULL));

	// generate random input of integers
	for (int i = 0; i < N; i++)
		temp[i] = A[i] = (rand() % 50);

	printf("Original Array : ");
	printArray(A);

	// sort array A[0..N-1] using temporary array temp
	mergesort(A, temp, 0, N - 1);

	printf("Modified Array : ");
	printArray(A);

	return 0;
}