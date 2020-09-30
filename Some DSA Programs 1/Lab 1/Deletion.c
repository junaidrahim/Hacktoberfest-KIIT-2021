#include<stdio.h>
void main()
{
int a[100],n,i;
printf("\n Enter the number of elements you want to enter=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter the element=");
scanf("%d",&a[i]);
}
printf("\n Array is:");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
// Deleting concept
int pos;
printf("\n Enter the position you want to delete the element=");
scanf("%d",&pos);
if(pos>=n+1)
{
printf("\n No such deletion is possible");
}
else
{
for(i=pos+1;i<n-1;i++)
{
a[i]=a[i+1];
}
}
printf("\n Resultant after deletion is:");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
} 
