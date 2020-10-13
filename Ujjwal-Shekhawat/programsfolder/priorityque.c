#include <stdio.h>
#include <stdlib.h>

typedef struct que {
    int data;

    // low > high
    int priority;

    struct que* next;

} queNode;

queNode* newqueNode(int d, int p)
{
    queNode* temp = (queNode*)malloc(sizeof(queNode));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;

    return temp;
}

int head_node(queNode** head)
{
    printf("(%d)", (*head)->priority);
    return (*head)->data;
}

void pop(queNode** head)
{
    queNode* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

void push(queNode** head, int d, int p)
{
    queNode* start = (*head);
    queNode* temp = newqueNode(d, p);
    if ((*head)->priority > p) {
        temp->next = *head;
        (*head) = temp;
    }
    else {
        while (start->next != NULL &&
               start->next->priority < p) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}

int main()
{
  queNode* pq = newqueNode(2, 9);
  push(&queNode, 4, 8);
  push(&queNode, 8, 5);
  push(&queNode, 1, 5);
  push(&queNode, 4, 4);
  push(&queNode, 3, 7);
  push(&queNode, 5, 3);
  push(&queNode, 7, 7);
  push(&queNode, 3, 4);
  push(&queNode, 8, 7);
  push(&queNode, 4, 6);
  push(&queNode, 2, 8);
  push(&queNode, 5, 1);
  push(&queNode, 1, 1);
  while (!(pq == NULL)) {
    printf("%d -> ", head_node(&queNode));
    pop(&queNode);
  }
  return 0;
}
 
