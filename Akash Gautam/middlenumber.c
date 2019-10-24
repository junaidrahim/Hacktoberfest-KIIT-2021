#include<stdio.h>
int main()
{
	int p,q,r;
	printf("Enter the numbers \n");
	scanf("%d%d%d",&p,&q,&r);
	if(q>p && p>r || r>p && p>q)
	{
		printf("The middle number is %d \n ",p);
	}
	if(p>q && q>r || r>q && q>p)
	{
		printf("The middle number is %d \n ",q);
	}
	if(q>r && r>p || p>r && r>q)
	{
		printf("The middle number is %d \n ",r);
	}
	return 0;
}