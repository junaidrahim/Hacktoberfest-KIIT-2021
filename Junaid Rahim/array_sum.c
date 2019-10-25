// Sum of an array using recursion

#include <stdio.h>

int sum(int size, int arr[size])
   {
    int arr_sum = 0;

    if(size == 1)
        return arr[0];
    
    else
    {
        arr_sum = arr[size-1] +  sum(--size, arr);
        return arr_sum;
    }   
}

int main()
   {
    int n;
    printf("Enter Size of Array is: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array: ");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The sum of the array is %d\n", sum(n, arr));
      return 0;
   }
