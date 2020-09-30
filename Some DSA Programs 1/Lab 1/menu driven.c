/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
void main()
{
    int n;
    printf("Enter The Size of arrray\n");
    scanf("%d",&n);
    int a[n],ch,p=0,lp=1;
    while(lp)
    {
    printf("Choices:\n");
    printf("1 to insert an element\n");
    printf("2 to delete an element\n");
    printf("3 to search for an element\n");
    printf("4 to sort the array\n");
    printf("5 to display the array");
    printf("Enter your choice :  ");
    scanf("%d",&ch);
    int  ar_ins(int *,int,int);
    int  ar_del(int *,int,int);
    void ar_sear(int *,int);
    void ar_sor(int *,int);
    void ar_disp(int *,int);
    switch (ch)
    {
    case 1:
        p = ar_ins(a,n,p);
        break;
    case 2:
        p = ar_del(a,n,p);
        break;
    case 3:
        ar_sear(a,n);
        break;
    case 4:
       ar_sor(a,n);
        break;
    case 5:
        ar_disp(a,n);
        break;    
    default:
        lp=0;
        printf("Wrong Choice Entered");
        break;
    }
    }
}
int ar_ins(int b[],int m,int k)
{
    int y;
    printf("Enter Element to be inserted\n");
    scanf("%d",&y);
    if(k<m)
    {
        b[k]=y;
        k++;
    }
    else 
     printf("Overflow\n");
    return (k); 

}
int ar_del(int b[],int m,int k)
{
    if(k>=0)
    {
       printf("Element Deleted : %d \n",b[k]);
        k--;
    }
    else 
     printf("Underflow");
    return (k); 

}
void ar_sear(int b[],int m)
{
    int y;
    printf("Enter Element to be searched : \n");
    scanf("%d",&y);
    int f=0;
    for(int i=0;i<m;i++)
    {
        if(y==b[i])
        {
            f=1;
            printf("Element Found at position %d \n",(i+1));
        }
    }
    if(!f)
     printf("Element Not Found \n");
}
void ar_sor(int b[],int m)
{
    for(int i=0;i<m-1;i++)
    {
        if(b[i]>b[i+1])
        {
            int t=b[i];
            b[i]=b[i+1];
            b[i+1]=t;
        }
    }
    printf("Sorting Done");
}
void ar_disp(int b[],int m)
{
    for(int i=0;i<m;i++)
     printf("%d \n",b[i]);
}