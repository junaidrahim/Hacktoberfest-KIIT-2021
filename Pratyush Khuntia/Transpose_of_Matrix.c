#include <stdio.h>

void main()
{
	int arr[3][3];
	printf("Enter elements of array : \n\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Original matrix : \n\n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose of matrix : \n\n");

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}

}
