#include <stdio.h>
void main()
{
	int a,b,c,d,e,avg;
	printf("Enter the marks for 5 subjects : \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	avg = (a+b+c+d+e)/5;
	printf("The average marks are :%d\n",avg);
	printf("The precentage is :%d\n",avg);
}
