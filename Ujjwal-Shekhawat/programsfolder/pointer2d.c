
#include <stdio.h> 
#include <stdlib.h> 

void add(int** a, int** b, int** c, int r1, int c1) {
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
        
    }
    
}

int main() 
{ 
    int r = 3, c = 4, i, j, count; 
    scanf(" %d %d", &r, &c);
  
    int **arr = (int **)malloc(r * sizeof(int *)); 
    for (i=0; i<r; i++) 
         *(arr+i) = (int *)malloc(c * sizeof(int)); 

    count = 0; 
    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         scanf(" %d", (*(arr+i)+j));//= ++count;

    i=0, j=0, count=0; 
  
    int **ar = (int **)malloc(r * sizeof(int *)); 
    for (i=0; i<r; i++) 
         *(ar+i) = (int *)malloc(c * sizeof(int)); 

    count = 0; 
    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         scanf(" %d", (*(ar+i)+j));// = ++count;
  
    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         printf("%d ", arr[i][j]); 

    printf("\n");

    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         printf("%d ", ar[i][j]); 
  
    printf("\n");

     i=0, j=0, count=0; 

    int **a = (int **)malloc(r * sizeof(int *)); 
    for (i=0; i<r; i++) 
         *(a+i) = (int *)malloc(c * sizeof(int)); 

     add(arr, ar, a, r, c);

     for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         printf("%d ", a[i][j]); 

     printf("\n");     

   return 0; 
} 
