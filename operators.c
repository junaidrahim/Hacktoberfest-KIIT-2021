// Accept two numbers and an operator (from +, -, *, /) and display the result after the operation.

#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter 2 numbers a and b -\n");
    scanf("%d %d",&a,&b);
    printf("Enter 1 for sum\nEnter 2 for difference\nEnter 3 for multiplication\nEnter 4 for division\n");
    scanf("%d",&x);
    switch (x)
    {
        case 1 : printf("The sum of %d and %d is - %d\n",a,b,a+b);
        break;

        case 2 : printf("The difference between %d and %d is - %d\n",a,b,a-b);
        break;

        case 3 : printf("The product of %d and %d is - %d\n",a,b,a*b);
        break;

        case 4 : printf("The division of %d and %d is - %d\n",a,b,a/b);
        break;
    }
}
