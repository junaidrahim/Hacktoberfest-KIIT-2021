#include<stdio.h>
int main()
{
	int r,e,i,j;
	printf("Enter rows of a matrix \n");
	scanf("%d",&r);
	printf("Enter columns of a matrix \n");
	scanf("%d",&e);
	printf("Enter the elements of matrix \n");
	int ar[r][e],trans[r][e];
	for(i=0;i<r;i++)
		for(j=0;j<e;j++)
			scanf("%d",&ar[i][j]);
		for(i=0;i<r;i++)
			for(j=0;j<e;j++)
				trans[j][i]=ar[i][j];
			printf("Transpose of the matrix is \n");
			for(i=0;i<r;i++)
	{
		for(j=0;j<e;j++)
		{
			printf("%d \n",trans[i][j]);
		}
	}
	 return 0;
}       
