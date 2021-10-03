#include <stdio.h>
int findinArr(int arr[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            return 1;
        }
    }
    return 0;
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {1, 5, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int dupele[n];
    int k = 0;
    printf("Array ");
    printArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        int index = i;
        int dup = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && (j > index))
            {
                index = j;
                dup = 1;
            }
        }
        if (dup != 0 && (findinArr(dupele, n, arr[i]) == 0))
        {
            dupele[k] = arr[i];
            k++;
            printf("Highest Index for %d is %d\n", arr[i], index);
        }
    }
    if (k == 0)
    {
        printf("No duplicate Elements\n");
    }
    return 0;
}