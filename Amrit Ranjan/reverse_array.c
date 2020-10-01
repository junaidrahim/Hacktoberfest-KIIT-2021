#include <stdio.h>

void main()
{
	int n,i,arr[100];
	printf("Enter the number of elements you want the array upto : ");
	scanf("%d",&n);
	printf("Enter the elements of the array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array reversed is :\n");
	int i--;
	for(;i>=0;i--)
	{
		printf("%d   ",arr[i]);
	}
}
