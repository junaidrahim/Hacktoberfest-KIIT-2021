#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

int main()
{
    NODE *head,*first,*temp=0;
    int c=0,ch=1;
    first=0;
    while(ch)
    {
     
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &head-> data);
        if (first != 0)
        {
            temp->next = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &ch);
    }
    temp = first;
    printf("\n Data items of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->data);
        c++;
        temp = temp -> next;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", c);
    return 0;
}
