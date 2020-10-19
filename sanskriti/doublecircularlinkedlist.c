/* Menu driven code for doubly linked list */


#include <stdio.h>
#include <stdlib.h>
typedef struct node node;
struct node
{
    int info;
    struct node *next, *prev;
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
            printf("Enter number\n0. Want to bind up \n1. Want to enter next element \n");
            scanf("%d", &i);
        }
        last = ptr;
        last->next = start;
        start->prev = last;
        printf("\n");
    }
}

void display()
{
    node *p;
    if (last == NULL)
        return;
    else
    {
        p = last->next;
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
        temp->prev = temp;
        last = temp;
    }
    else
    {
        last->next->prev = temp;
        temp->next = last->next;
        temp->prev = last;
        last->next = temp;
        start = temp;
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
        temp->prev = temp;
        last = temp;
    }
    else
    {
        last->next->prev = temp;
        temp->next = last->next;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
}

void insertPos()
{
    if (last == NULL)
        return;
    else
    {
        node *p, *temp;
        int ele;
        temp = (node *)malloc(sizeof(node));
        printf("Enter the element after which u want to enter ");
        scanf("%d", &ele);
        printf("Enter element that u want to enter ");
        scanf("%d", &temp->info);
        if (last->info == ele)
        {
            temp->next = start;
            last->next = temp;
            temp->prev = last;
            start->prev = temp;
            last = temp;
        }
        else
        {
            p = last->next;
            while (p->info != ele)
            {
                p = p->next;
                if (p == last)
                    return;
            }
            p->next->prev = temp;
            temp->next = p->next;
            p->next = temp;
            temp->prev = p;
        }
    }
}

void deleteB()
{
    if (last == NULL)
        return;
    else
    {
        struct node *p;
        p = last->next;
        if (last->next == last)
        {
            free(p);
            last = NULL;
            return;
        }
        start = p->next;
        p->next->prev = last;
        last->next = p->next;
        free(p);
    }
}

void deleteE()
{

    struct node *p;
    p = last;

    if (last == NULL)
        return;
    else if (last->next == last)
    {
        free(p);
        last = NULL;
        return;
    }
    else
    {
        last = last->prev;
        last->next = start;
        start->prev = last;
        free(p);
    }
}

void deleteExactPos()
{
    if (last == NULL)
        return;
    else
    {
        int pos, i;
        node *p;
        p = last;
        printf("Enter which position u want to delete : ");
        scanf("%d", &pos);
        if (pos == 1)
        {
            if (last->next == last)
            {
                free(p);
                last = NULL;
                return;
            }
            else
            {
                p = last->next;
                last->next->next->prev = last;
                last->next = last->next->next;
                free(p);
                return;
            }
        }
        else
        {
            p = p->next;
            for (i = 0; i < pos - 1; i++)
            {
                p = p->next;
                if (p == last)
                    break;
            }
            if (p == last && i == pos - 2)
            {
                last = p->prev;
                last->next = p->next;
                p->prev->next = p->next;
                p->next->prev = p->prev;
                free(p);
                return;
            }
            if (p == last)
            {
                return;
            }
            p->prev->next = p->next;
            p->next->prev = p->prev;
            free(p);
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
        printf("\n7. Delete at i position");
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
            deleteExactPos();
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