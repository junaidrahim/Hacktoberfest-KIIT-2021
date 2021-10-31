#include<stdio.h>
#include<stdlib.h>

static int count = 0;

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

struct node* head = NULL;
struct node* tail = NULL;

void insert(int data) {
    count++;
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    if(head == NULL) {
        head = new;
        new->prev=NULL;
        new->next=NULL;
        tail=new;
    }
    else {
        tail->next=new;
        new->next=NULL;
        new->prev=tail;
        tail=tail->next;
    }
}

void insertAtPosition(int index, int data) {
    count++;
    struct node* new = (struct node*)malloc(sizeof(struct node));
    int i=0;
    new->data=data;
    struct node* temp=head;
    while(temp != NULL && i != index) {
        //printf("%d->", temp->data);
        temp=temp->next;
        i++;
    }
    new->prev=temp;
    new->next=temp->next;
    temp->next=new;
    new->next->prev=new;
}

void deleteAtPosition(int index) {
    count--;
    int i=0;
    struct node* temp=head;
    while(temp != NULL && i != index) {
        //printf("%d->", temp->data);
        temp=temp->next;
        i++;
    }
    if(temp == tail) {
        printf("End node pointing");
        tail=tail->prev;
        tail->next=NULL;
        free(temp);
        return;
    }
    if(temp == head) {
        printf("Head node pointing");
        head=head->next;
        head->prev=NULL;
        free(temp);
        return;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}

void reverse() {
    struct node* temp1 = head;
    struct node* temp2 = tail;
    while(temp1 != temp2->next || temp1->prev != temp2) {
        if(temp1==temp2) break;
        int tempData=temp1->data;
        temp1->data=temp2->data;
        temp2->data=tempData;
        temp1=temp1->next;
        temp2=temp2->prev;
    }
}

void reverseNodes(struct node **Head, struct node **Tail) 
{ 
    struct node* temp = NULL;   
    struct node* cur = *Head;
    *Tail=cur;
    while (cur !=  NULL) 
    { 
      temp = cur->prev; 
      cur->prev = cur->next; 
      cur->next = temp;               
      cur = cur->prev; 
    }
    *Head = temp->prev;
} 

void Display() {
    struct node* temp=head;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void RevDisplay() {
    struct node* temp=tail;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

int main() {
    int choice=0, again=0, data=0, index=0;
    do {
    printf("1.Insert\n2.Delete\n3.Insert at position\n4.Delete at position\n5.Reverse\n6.Display\n7.Exit\nChoice : ");
    scanf(" %d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the data to be inserted : ");
        scanf(" %d", &data);
        insert(data);
        break;
    case 2:
        deleteAtPosition(0);
        break;
    case 3:
        printf("Enter data and index : ");
        scanf(" %d %d", &data, &index);
        insertAtPosition(index, data);
        break;
    case 4:
        printf("Enter the index to be deleted : ");
        scanf(" %d", &index);
        deleteAtPosition(index);
        break;
    case 5:
        reverseNodes(&head, &tail);
        break;
    case 6:
        Display();
        RevDisplay();   
        break;
    case 7:
        exit(0);
        break;
    default:
        break;
    }
    printf("\nAgain ? (1 : 0) : ");
    scanf(" %d", &again);
    } while(again == 1);
    printf("\n%d\n\n", count);
    reverseNodes(&head, &tail);
    Display();
    RevDisplay();

    return 0;
}