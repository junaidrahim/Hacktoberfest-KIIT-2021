#include <stdio.h>

void main()
{   
    int i,n,sum=0,m;
    printf("Enter Number : ");
    scanf("%d",&n);
    l=n;
    for(i=0; i<8; i++)
    {
        sum=sum+(n%10);
        n=n/10;
    }
        printf("Sum of digits of %d is : %d\n",n,sum);
}
