#include <stdio.h>
void main()
{
	int p,r,p1;
	printf("Enter the amount to be converted :");
	scanf("%d",&p);
	r=p/100;
	p1=p%100;
	printf("%d paisa = %d Rupee and %d paisa only\n",p,r,p1);
}
