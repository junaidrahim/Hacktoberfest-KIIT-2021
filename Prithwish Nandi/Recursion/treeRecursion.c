#include <stdio.h>
#include <stdlib.h>
void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1);
        fun(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter a number to see the tree recursion \n");
    scanf("%d",&n);
    fun(n);
    return 0;
}