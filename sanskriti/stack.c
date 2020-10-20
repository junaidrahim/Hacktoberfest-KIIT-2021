/*menu driven for stack pop() , push(), peep() and display() */


#include <stdio.h>
int top = -1, max = 50, ar[50];

void push(int val)
{
    if (top == max - 1)
    {
        printf("Overflow\n");
        return;
    }
    else
    {
        top = top + 1;
        ar[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow");
        return;
    }
    else
    {
        int val = ar[top--];
    }
}

void peep()
{
    if (top == -1)
    {
        printf("\nUnderflow");
        return;
    }
    else
    {
        int val = ar[top];
        printf("\n%d", val);
    }
}


int main(){
    int i,val;
    while (1)
    {
        printf("\n\n1. insert element in stack");
        printf("\n2. delete element from stack");
        printf("\n3. display top of the element of stack");
        printf("\n4. exit");
        printf("\nEnter choice \n");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("\nEnter element : ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong choice ");
            break;
        }
    }
}