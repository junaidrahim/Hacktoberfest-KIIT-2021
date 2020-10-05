#include<stdio.h>
#include<stdlib.h>

struct node {
    int x;
    struct node* next;
};

struct node* head = NULL;
struct node* header = NULL;

void insert(int d) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->x = d;
    new->next = NULL;
    if(head == NULL) {
        head = new;
        new->next = head;
        head->x=d;
        
        header = (struct node*)malloc(sizeof(struct node));
        header->next=head;
        header->x=0;
        //return;
    }
    else {
        struct node* temp = head->next;
        while(temp->next != head) {
            temp = temp->next;
        }
        temp->next = new;
        new->next = head;
        header->x+=1;
    }
}

void Display() {
    printf("%d->", header->x);
    struct node* temp = head;
    do {
        printf("%d->", temp->x);
        temp=temp->next;
    } while(temp != head);
    //printf(" 💮 Remeaning Processes : %d\n", count);
}

int main() {
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    Display();
}