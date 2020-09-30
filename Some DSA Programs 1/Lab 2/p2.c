
#include<stdio.h>
#include<stdlib.h>
void main()
{
     int n = 0,m=0,p;
     void mer(int *,int *,int *,int,int);
     void disp(int *,int);
     int binsearch(int *,int,int,int);
    int *a = NULL, *b = NULL;
    int val;
    printf("Enter 1st Array\n");
    while(scanf("%d", &val) == 1 && val != -1)
    {
        a = realloc(a, (n+1) * sizeof(int));
        a[n++] = val;
    }
    printf("Enter 2nd Array\n");
    while(scanf("%d", &val) == 1 && val != -1)
    {
        b = realloc(b, (m+1) * sizeof(int));
        b[m++] = val;
    }
    p=m+n;
    int *c=malloc(p*sizeof(int));
    mer(a,b,c,n,m);
    disp(c,p);
    int s;
    printf("Enter Element to be Searched : ");
    scanf("%d",&s);
   int k = binsearch(c,0,p,s);
   if(k>=0)
    printf("Element found at position %d \n ",(k+1));
   else
    printf("Element not found\n");
}
void mer(int x[],int y[],int z[],int e,int f)
{
 int g=0;
 for(int i=0;i<e;i++)
 {
     z[g]=x[i];
     g++;
 }
 for(int i=0;i<f;i++)
 {
     z[g]=y[i];
     g++;
 }
}
void disp(int x[],int y)
{
    for(int i=0;i<y;i++)
      printf("%d  ",x[i]);
    printf("\n");  
}
int binsearch(int x[],int l,int u,int k)
{
    while(l<=u)
    {
        int m=(l+u)/2;
        if(k==x[m])
         return m;
        if(k>x[m])
         return binsearch(x,m+1,u,k);
        return binsearch(x,l,m-1,k); 
    }
    return -1;
}