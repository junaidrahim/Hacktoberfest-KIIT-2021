#include <stdio.h>
void main()
{
	int m1,km,m2;
	printf("Enter value to be converted : ");
	scanf("%d",&m1);
	km=m1/1000;
	m2=m1%1000;
	printf("%d meter = %d km and %d meter\n",m1,km,m2);
}