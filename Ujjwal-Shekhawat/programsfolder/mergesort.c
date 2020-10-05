#include<stdio.h>
#include<stdlib.h>

void mergeArrays(int* a, int* b, int s1, int s2, int* c) 
{ 
    int i = 0, j = 0, k = 0; 

    while (i<s1 && j <s2) 
    { 
        if (*(a+i) < *(b+j)) 
            c[k++] = a[i++]; 
        else
            c[k++] = b[j++]; 
    } 

    while (i < s1) 
        c[k++] = a[i++]; 

    while (j < s2) 
        c[k++] = b[j++]; 
}

int binarySearch(int* a, int s, int e, int element)
{
    if (e >= s) { 
        int m = (s+e)/2; 

        if (a[m] == element) 
            return m; 

        if (a[m] > element) 
            return binarySearch(a, s, m - 1, element); 

        return binarySearch(a, m + 1, e, element); 
    } 

    return -1; 
} 

int main() {
    int* a, *b, *c;
    int s1, s2;

    scanf(" %d %d", &s1, &s2);

    a=(int*)malloc(s1*sizeof(int));
    b=(int*)malloc(s2*sizeof(int));
    c=(int*)malloc((s1+s2)*sizeof(int));

    for (int i = 0; i < s1; i++)
    {
        *(a+i) = i; 
    }
    for (int i = 0; i < s2; i++)
    {
        *(b+i) = i+212;  // Can also be taken as user input using scanf("%d", (b+i)) Note ; no need of & as pointer is a memory address it self
    }

    mergeArrays(a, b, s1, s2, c);
    
    // Print the merged array
    for (int i = 0; i < s1+s2; i++)
    {
        printf("%d ", *(c+i));
    }
    printf("\n");
    
    int element;
    printf("Enter the element to be searched for (using binary search): ");
    scanf(" %d", &element);

    int index = binarySearch(c, 0, (s1+s2), element); // Searching for a element using binary search

    printf("\nElement %d found at index position : %d", element, index);

    return 0;
}