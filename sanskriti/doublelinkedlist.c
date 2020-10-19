/* Menu driven code for double linked list */


#include <stdio.h>
#include <stdlib.h>
typedef struct node node;
struct node
{
    int info;
    struct node *next, *prev;
} *start = NULL;

void create()
{
    int i;
    printf("If u want to make a linked list enter 1 otherwise enter 0  \n");
    scanf("%d", &i);
    if (i == 0)
        return;
    else
    {
        node *ptr;
        ptr = (node *)malloc(sizeof(node));
        printf("Enter data: ");
        scanf("%d", &ptr->info);
        ptr->next = NULL;
        ptr->prev = NULL;

        start = ptr;
        int i;
        printf("Enter number\n0. Want to bind up \n1. Want to enter next element\n");
        scanf("%d", &i);
        while (i)
        {
            ptr->next = (node *)malloc(sizeof(node));
            ptr->next->prev = ptr;
            ptr = ptr->next;
            printf("Enter data: ");
            scanf("%d", &ptr->info);
            ptr->next = NULL;
            printf("Enter number\n0. Want to bind up \n1. Want to enter next element \n");
            scanf("%d", &i);
        }
        printf("\n");
    }
}

void insertB()
{
    printf("Enter the number that u want to insert at beginning: ");
    struct node *temp;
    temp = (node *)malloc(sizeof(node));
    scanf("%d", &temp->info);
    temp->prev = NULL;
    if (start == NULL)
    {
        temp->next = NULL;
        start = temp;
    }
    else
    {
        temp->next = start;
        start->prev = temp;
        start = temp;
    }
}

void insertE()
{
    node *ptr, *temp;
    printf("Enter the number that u want to insert at end: ");
    temp = (node *)malloc(sizeof(node));
    scanf("%d", &temp->info);
    temp->next = NULL;
    ptr = start;
    if (ptr == NULL)
    {
        start = temp;
        temp->prev = NULL;
    }
    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
        temp->prev = ptr;
    }
}

void insertPos()
{
    if (start == NULL)
        return;
    else
    {
        node *temp, *ptr;
        temp = (node *)malloc(sizeof(node));
        printf("Enter the position after which u want to enter : ");
        int i, n;
        scanf("%d", &n);
        printf("Enter number : ");
        scanf("%d", &temp->info);
        ptr = start;
        for (i = 1; i <= n; i++)
        {
            if (ptr->next != NULL)
            {
                if (i == n)
                {
                    ptr->next->prev = temp;
                    temp->next = ptr->next;
                    ptr->next = temp;
                    temp->prev = ptr;
                }
                else
                    ptr = ptr->next;
            }
            else if (ptr->next == NULL && i == n)
            {
                temp->next = ptr->next;
                ptr->next = temp;
                temp->prev = ptr;
            }
            else
            {
                printf("There is no such position\n");
                break;
            }
        }
    }
}

void count()
{
    int a = 0;
    node *p;
    p = start;
    while (p != NULL)
    {
        a++;
        p = p->next;
    }
    printf("Total number of element : %d \n", a);
}

void displayForward()
{
    node *p;
    p = start;
    while (p != NULL)
    {
        printf("%d   ", p->info);
        p = p->next;
    }
    printf("\n\n");
}

void displayBackward()
{
    node *p;
    p = start;
    while (p->next != NULL)
        p = p->next;
    while (p != NULL)
    {
        printf("%d   ", p->info);
        p = p->prev;
    }

    printf("\n\n");
}

void deleteE()
{
    node *ptr;
    ptr = start;
    if (ptr == NULL)
        return;
    else if (ptr->next == NULL)
    {
        start = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->prev->next = NULL;
        free(ptr);
    }
}
void deleteB()
{
    if (start == NULL)
        return;
    else
    {
        node *ptr;
        ptr = start;
        start = ptr->next;
        if (start == NULL)
        {
            free(ptr);
            return;
        }
        else
        {
            ptr->next->prev = NULL;
            free(ptr);
        }
    }
}

void deletePos()
{
    printf("Enter the position after u want to delete : ");
    int n;
    scanf("%d", &n);
    node *ptr;
    if (start == NULL || start->next == NULL)
        return;
    else
    {
        int i;
        ptr = start;
        for (i = 1; i <= n; i++)
        {
            if (ptr != NULL)
                ptr = ptr->next;
            else
                return;
        }
        if (ptr != NULL)
        {
            ptr->prev->next = ptr->next;
            if (ptr->next == NULL)
            {
                free(ptr);
                return;
            }
            else
            {
                ptr->next->prev = ptr->prev;
                free(ptr);
                return;
            }
        }
        else
        {
            printf("There is no such postion\n");
            return;
        }
    }
}

int main()
{
    create();

    int ch;
    while (1)
    {
        printf("\n1. Insert at beginning");
        printf("\n2. Insert at end");
        printf("\n3. Insert at position i");
        printf("\n4. count ");
        printf("\n5. Traverse forward");
        printf("\n6. Traverse backward");
        printf("\n7. delete last node");
        printf("\n8. delete first node");
        printf("\n9. Delete at i");
        printf("\n10. Exit\n");
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertB();
            break;
        case 2:
            insertE();
            break;
        case 3:
            insertPos();
            break;
        case 4:
            count();
            break;
        case 5:
            displayForward();
            break;
        case 6:
            displayBackward();
            break;
        case 7:
            deleteE();
            break;
        case 8:
            deleteB();
            break;
        case 9:
            deletePos();
            break;
        case 10:
            exit(0);
        default:
            printf("\n Wrong choice");

            return 0;
        }
    }
}