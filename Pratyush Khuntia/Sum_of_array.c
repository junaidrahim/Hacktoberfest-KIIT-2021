#include <stdio.h>

void main()
{
	int arr[5], i, sum=0;
	printf("Enter the elements of the array : ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<5; i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum of array elements : %d",sum);
}
