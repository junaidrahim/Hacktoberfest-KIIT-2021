#include <stdio.h>

void main()
{   
    int n,m=1,last,t=0;
    printf("Enter End : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",m);
    	last=t;
    	m+=last;
		t=m;
    }
}
