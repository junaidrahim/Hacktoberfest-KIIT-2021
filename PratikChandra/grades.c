#include <stdio.h>

void main()
{
	int a,b,c,perc;
	printf("Enter your marks : ");
	scanf("%d%d%d",&a,&b,&c);
	perc=((a+b+c)/300)*100;
	if(perc>=85)
	{
		printf("First Division.\n");
	}
	else if(perc<=85&&perc>=55)
	{
		printf("Second Division.\n");
	}
	else
	{
		printf("Third Division.\n");
	}
}
