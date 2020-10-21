// Program to dynamically allocate 2D array using array of pointers(subscripting pointer to an array)
#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
	int r , c , i, j, count; 

	int *arr[r]; 
    printf("enter no of rows and columns");
     scanf("%d%d",&r,&c);
	for (i=0; i<r; i++) 
		arr[i] = (int *)malloc(c * sizeof(int)); 

	count = 0; 
	for (i = 0; i < r; i++) 
	for (j = 0; j < c; j++) 
		arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count 

	for (i = 0; i < r; i++) 
	for (j = 0; j < c; j++) 
		printf("%d ", arr[i][j]); 


return 0; 
} 
