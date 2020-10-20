/* Menu driven code for singly circular linked list */



#include <stdio.h>
#include <stdlib.h>
typedef struct node node;
struct node
{
    int info;
    struct node *next;
} *start = NULL, *last = NULL;

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

        start = ptr;
        int i;
        printf("Enter number\n0. Want to bind up \n1. Want to enter next element\n");
        scanf("%d", &i);
        while (i)
        {
            ptr->next = (node *)malloc(sizeof(node));
            ptr = ptr->next;
            printf("Enter data: ");
            scanf("%d", &ptr->info);
            ptr->next = NULL;
            printf("Enter number\n0. Want to bind up \n1. Want to enter next element \n");
            scanf("%d", &i);
        }
        if (ptr->next == NULL)
        {
            ptr->next = start;
            last = ptr;
        }
        printf("\n");
    }
}

void display()
{
    node *p;
    p = last;
    if (last == NULL)
    {
        return;
    }
    else
    {
        p = p->next;
        do
        {
            printf("%d   ", p->info);
            p = p->next;
        } while (p != last->next);
    }
    printf("\n\n");
}

void insertB()
{
    printf("Enter the number that u want to insert at beginning: ");
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &temp->info);
    if (last == NULL)
    {
        temp->next = temp;
        last = temp;
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
        start=temp;
    }
}

void insertE()
{
    struct node *p, *temp;
    printf("Enter the number that u want to insert at end: ");
    temp = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &temp->info);
    if (last == NULL)
    {
        temp->next = temp;
        last = temp;
    }
    else
    {
        last->next = temp;
        temp->next = start;
        last = temp;
    } 
}

void insertPos()
{
    if (start == NULL)
    {
        return;
    }
    else
    {
        struct node *p, *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        int ele;
        printf("Enter element after which u want to insert : ");
        scanf("%d", &ele);
        printf("Enter number which u want to insert: ");
        scanf("%d", &temp->info);
        p = last;
        while (ele != p->info)
        {
            if (p->next == last)
            {
                printf("There is no such type of element\n");
                break;
            }
            p = p->next;
        }
        if (ele == p->info)
        {
            temp->next = p->next;
            p->next = temp;
        }
    }
}

void deleteB()
{
    if (start == NULL)
    {
        return;
    }
    else
    {
        struct node *ptr, *p;
        p = start;
        start = start->next;
        last->next = start;
        free(p);
    }
}

void deleteE()
{

    struct node *p, *q;
    p = last;

    if (last == NULL)
    {
        return;
    }
    else if (last->next == NULL)
    {
        last = NULL;
        free(p);
    }
    else
    {
        while (p->next != last)
        {
            p = p->next;
        }
        last = p;
        p = p->next;
        last->next = start;
        free(p);
    }
}

void deletePos()
{
    int a;
    printf("Enter element after which u want to delete : ");
    scanf("%d", &a);

    struct node *p, *q;
    p = last;
    if (start == NULL)
    {
        return;
    }
    else if (p->info == a)
    {
        q = p;
        p = p->next;
        if (p == NULL)
        {
            q->next == NULL;
        }
        else
        {
            q->next = p->next;
            free(p);
        }
    }
    else
    {
        p = start;

        while (p != NULL)
        {
            if (p->next == NULL)
            {
                if (p->info == a)
                {
                    return;
                }
            }
            else
            {
                if (p->info == a)
                {
                    q = p;
                    p = p->next;
                    q->next = p->next;
                    free(p);
                    break;
                }
                p = p->next;
            }
        }
    }
}

int main()
{
    create();

    int ch;
    while (1)
    {
        printf("\n1. Display");
        printf("\n2. Insert at beginning");
        printf("\n3. Insert at end");
        printf("\n4. Insert after element i");
        printf("\n5. delete first node");
        printf("\n6. delete last node");
        printf("\n7. Delete at i");
        printf("\n8. Exit\n");
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            insertB();
            break;
        case 3:
            insertE();
            break;
        case 4:
            insertPos();
            break;
        case 5:
            deleteB();
            break;
        case 6:
            deleteE();
            break;
        case 7:
            deletePos();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("\n Wrong choice");

            return 0;
        }
    }
}