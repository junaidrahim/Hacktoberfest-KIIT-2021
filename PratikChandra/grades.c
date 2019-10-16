#include <stdio.h>

void main()
{
	int a,b,c,p;
	printf("Enter your marks : ");
	scanf("%d%d%d",&a,&b,&c);
	p=(a+b+c)/3;
	if(p>=80)
	{
		printf("First Division.\n");
	}
	else if(p<60)
	{
		printf("Third Division.\n");
	}
	else
	{
		printf("Second Division.\n");
	}
}
