#include <stdio.h>

void main()
{	
	int arr[10], t;
	printf("Enter elements in the array :\n");
	for(int i=0; i<10; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<10; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	printf("Array in ascending order is ");
	for(int i=0; i<10; i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
