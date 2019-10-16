#include <stdio.h>

void main()
{   
    int n,sum=0,m;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int i=0; i<8; i++)
    {
        sum=sum+(n%10);
        n=n/10;
    }
        printf("Sum of digits : %d\n",sum);
}
