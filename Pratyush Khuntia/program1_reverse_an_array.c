#include <stdio.h>

void main()
{
	int n, arr[n];
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Enter the elements of the array :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array reversed is :\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d   ",arr[i]);
	}
}
