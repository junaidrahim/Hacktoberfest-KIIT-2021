#include <stdio.h>

void main()
{
	int a,b,t;
	printf("Enter an integer to check : ");
	scanf("%d",&a);
	for(int i=2; i<a && t!=0; i++)
	{
		t=a%i;
	}
	
	if(t==0)
	{
		printf("The number is not a prime number.\n");
	}
	else
	{
		printf("Then number is a prime number.\n");
	}
}
