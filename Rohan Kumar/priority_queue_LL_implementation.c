#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    int priority;
    struct node *next;
};
struct node *start = NULL;
struct node *insert(struct node *start)
{
    int val, pri;
    struct node *ptr, *p;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value and its priority: ");
    scanf("%d %d", &val, &pri);
    ptr->data = val;
    ptr->priority = pri;
    if (start == NULL || pri < start->priority)
    {
        ptr->next = start;
        start = ptr;
    }
    else
    {
        p = start;
        while (p->next != NULL && p->next->priority <= pri)
        {
            p = p->next;
        }
        ptr->next = p->next;
        p->next = ptr;
    }
    return start;
}
struct node *delete (struct node *start)
{
    struct node *ptr;
    if (start == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else
    {
        ptr = start;
        printf("\n Deleted item is: %d", ptr->data);
        start = start->next;
        free(ptr);
    }
    return start;
}
void display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if (start == NULL)
    {
        printf("\nQUEUE IS EMPTY");
    }
    else
    {
        printf("\n PRIORITY QUEUE IS : ");
        while (ptr != NULL)
        {
            printf("\t%d[priority=%d]", ptr->data, ptr->priority);
            ptr = ptr->next;
        }
    }
}
int main()
{
    int option, val;
    do
    {
        printf("\n ***** OPTION *****");
        printf("\n 1. Insert an element");
        printf("\n 2. Delete an element");
        printf("\n 3. Display the queue");
        printf("\n 4. EXIT");
        printf("\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = insert(start);
            break;
        case 2:
            start = delete (start);
            break;
        case 3:
            display(start);
            break;
        }
    } while (option != 4);
    return 0;
}
