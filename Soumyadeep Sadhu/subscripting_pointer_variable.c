//program to access dynamically allocated memory as a 1D array(subscripting pointer variable)
#include <stdio.h> 
#include <stdlib.h>   
int main() 
{ 
   int* ptr; 
    int n, i;  
    printf("Enter number of elements:\n");     
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated using malloc.\n"); 
  
        // Get the elements of the array 
        for (i = 0; i < n; ++i) { 
            ptr[i] = i + 1; 
        } 
  
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d, ", ptr[i]); 
        } 
    } 
  
    return 0; 
}