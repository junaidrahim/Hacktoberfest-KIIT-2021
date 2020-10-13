#include <stdio.h>
#include <stdlib.h>

struct c_que {
    int data;
    struct c_que* next;
};

struct c_que* head = NULL, *tail = NULL;

void insert(int p_data) {
    struct c_que* n_que = (struct c_que*)malloc(sizeof(struct c_que));
    n_que->data = p_data;
    n_que->next = head;
    if(head == NULL) {
        head = tail = n_que;
    }
    else {
        tail->next = n_que;
        tail = tail->next;
    }
}

void Delete() {
    struct c_que* temp = head;
    if(head->next != head) {
        tail->next = head->next;
        head = head->next;
        free(temp);
    }
    else {
        head = tail = NULL;
        free(temp);
    }
}

void display() {
    struct c_que* temp = head;
    do{
        printf("%d->", temp->data);
        temp = temp->next;
    }while(temp != head);
    printf("\n");
}

int main() {
    int data=0, again=0;
    do{
    printf("Menu : \n1.)Insert element in que 1\n2.)Delete element in que\n3.)Display List\n4.)Exit\nChoice : ");
    int choice=0;
    scanf(" %d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the element data : ");
        scanf(" %d", &data);
        insert(data);
        break;

    case 2:
        Delete();
        break;

    case 3:
        display();
        break;

    case 4:
        exit(0);
        break;
    
    default:
        printf("Please enter a valid choice\n");
        break;
    }
    printf("\nAgain (1 or 0) : ");
    scanf(" %d", &again);
    } while(again == 1);
}