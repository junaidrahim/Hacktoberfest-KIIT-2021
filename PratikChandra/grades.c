#include <stdio.h>

void main()
{
	int a,b,c,p;
	printf("Enter your marks : ");
	scanf("%d%d%d",&a,&b,&c);
	p=((a+b+c)/300)*100;
	if(p>=80)
	{
		printf("First Division.\n");
	}
	else if(p<=80&&p>=60)
	{
		printf("Second Division.\n");
	}
	else
	{
		printf("Third Division.\n");
	}
}
