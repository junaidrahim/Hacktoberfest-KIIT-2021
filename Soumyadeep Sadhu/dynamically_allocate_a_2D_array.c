//Program to dynamically allocate a 2D array (pointer to pointer).
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int r , c , i, j, count; 
    printf("enter no of rows and columns");
     scanf("%d%d",&r,&c);

	int **arr = (int **)malloc(r * sizeof(int *)); 
	for (i=0; i<r; i++) 
		arr[i] = (int *)malloc(c * sizeof(int)); 

	count = 0; 
	for (i = 0; i < r; i++) 
	for (j = 0; j < c; j++) 
		arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count 

	for (i = 0; i < r; i++) 
	for (j = 0; j < c; j++) 
		printf("%d ", arr[i][j]); 

return 0; 
} 

