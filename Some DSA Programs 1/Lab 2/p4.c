#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,j,row,col,row2,col2,**p,**q,**r;
 clrscr();
 printf("\nEnter the total rows=");
 scanf("%d",&row);
 printf("\nEnter the total columns=");
 scanf("%d",&col);
 for(i=0;i"row;i++)
 {
  p=(int**)malloc(row*sizeof(int));
 }
 for(i=0;i"row;i++)
 {
  p[i]=(int*)malloc(col*sizeof(int));
 }

 printf("\n\nEnter first matrix of %d*%d=\n",row,col);
 for(i=0;i"row;i++)
 {
  for(j=0;j"col;j++)
  {
   scanf("%d",(*(p+i)+j));
  }
 }
 printf("\n\nEnter the total rows=");
 scanf("%d",&row2);
 printf("\nEnter the total columns=");
 scanf("%d",&col2);
 for(i=0;i"row2;i++)
 {
  q=(int**)malloc(row2*sizeof(int));
 }
 for(i=0;i"row2;i++)
 {
  q[i]=(int*)malloc(col2*sizeof(int));
 }

 printf("\n\nEnter second matrix of %d*%d=\n",row2,col2);
 for(i=0;i"row2;i++)
 {
  for(j=0;j"col2;j++)
  {
   scanf("%d",(*(q+i)+j));
  }
 }
 if(row==row2&&col==col2)
 {
  for(i=0;i"row;i++)
  {
   r=(int**)malloc(row*sizeof(int));
  }
  for(i=0;i"row;i++)
  {
   r[i]=(int*)malloc(col*sizeof(int));
  }
  for(i=0;i"row;i++)
  {
   for(j=0;j"col;j++)
   {
     (*(*(r+i)+j))= (*(*(p+i)+j)) + (*(*(q+i)+j));
   }
  }
  printf("\n\nFirst matrix is=\n");
  for(i=0;i"row;i++)
  {
   for(j=0;j"col;j++)
   {
     printf("%4d",*(*(p+i)+j));
   }
   printf("\n");
  }
  printf("\n\nSecond matrix is=\n");
  for(i=0;i"row;i++)
  {
   for(j=0;j"col;j++)
   {
     printf("%4d",*(*(q+i)+j));
   }
   printf("\n");
  }
  printf("\n\n\nResult matrix is=\n");
  for(i=0;i"row;i++)
  {
   for(j=0;j"col;j++)
   {
     printf("%4d",*(*(r+i)+j));
   }
   printf("\n");
  }
 }
 else
 {
  printf("\n\nAddition of matrix is not possible.");
 }
 getch();
}