//Simple menu driven operations on Stacks ie, Push, Pop and Display Function
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void display();
void push(int);
void pop();

int main()
{
    int n, choice;
    do
    {
        printf("\n-------------\n Stack Menu \n-------------\n1. Push \n2. Pop\n3. Display\n0. Exit");
        printf("\nEnter Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nEnter number ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    }while (choice != 0);
}

void push(int item)
{
    struct node *newptr = malloc(sizeof(struct node));
    newptr->data = item;
    newptr->next = top;
    top = newptr;
}

void display()
{
    struct node *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("\n\n ERROR : The Stack is already empty, try other options  ");
    }
    else
    {
        struct node *temp;
        temp = top;
        top = top->next;
        printf("\n\n%d deleted", temp->data);
        free(temp);
    }
}
