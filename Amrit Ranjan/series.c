#include <stdio.h>

void main()
{   
    int n,i,m=1,last,t=0;
    printf("Enter End : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("%d ",m);
    	last=t;
    	m+=last;
		t=m;
    }
}
