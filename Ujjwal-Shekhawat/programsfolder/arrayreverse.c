#include<stdio.h>
#include<stdlib.h>

void reverse(int* a, int n) {
    n-=1;
    for (int i = 0; i < n/2; i++)
    {
        *(a+i) += *(a+n-i);
        *(a+n-i) = *(a+i) - *(a+n-i);
        *(a+i) = *(a+i) - *(a+n-i);
    }
    
}

int main() {
    int* a, n;
    printf("Enter the number of elements : ");
    scanf(" %d", &n);

    a=(int*)malloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        *(a+i) = i;
    }
    
    printf("Initial array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");

    reverse(a, n);

    printf("Array after reversing  \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
    
}