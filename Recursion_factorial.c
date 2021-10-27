//2. Use recursion to find the factorial of a number. 

#include<stdio.h>
int multiplynumbers(int n);
int main()
{
    int n;
    printf("Enter a positive integer - ");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n",n,multiplynumbers(n));
    return 0;
}

int multiplynumbers(int n)
{
    if (n>0)
    return n*multiplynumbers(n-1);
    else
    return 1;
}
