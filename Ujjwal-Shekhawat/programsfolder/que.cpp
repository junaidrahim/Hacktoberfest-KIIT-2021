#include <stdio.h>
#include <stdlib.h>

struct que {
    int data;
    struct que* next;
};

struct que* head = NULL;
struct que* tail = NULL;

static int current_size = 0;

void insert(int p_data) {
    current_size++;
    if(current_size>10){
        printf("Overflow\n");
        return;
    }
    struct que* q_new = (struct que*)malloc(sizeof(struct que));
    q_new->next = NULL;
    q_new->data = p_data;
    if(head == NULL) {
        head = q_new;
        tail = q_new;
    }
    else {
        tail->next = q_new;
        tail = tail->next;
    }
}

void Delete() {
    current_size--;
    if(current_size<=0) {
        printf("underflow\n");
        return;
    }
    struct que* temp=head;
    if(head->next != NULL) {
        head = head->next;
    }
    free(temp);
}

void display() {
    struct que* temp=head;
    while(temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
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