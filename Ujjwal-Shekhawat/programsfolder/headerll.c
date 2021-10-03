#include<stdlib.h>
#include<stdio.h>

struct node {
    int x;
    struct node* next;
};

struct node* head=NULL;
struct node* header=NULL;

void insert(int data) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    new->x = data;
    if(head == NULL) {
        head = new;
        //head->x=0;

        header = (struct node*)malloc(sizeof(struct node));
        header->next=head;
        header->x=1;
        return;
    }
    else {
        header->x+=1;
        struct node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new;
    }
}

void delete(int choice) {
    header->x-=1;
    if(choice == 0) {   
        struct node* temp = head;
        head=head->next;
        header->next=temp->next;
        free(temp);
    }
    else {
        struct node* temp = head;
        struct node* temp1 = head;
        while(temp->next != NULL) {
            temp1=temp;
            temp = temp->next;
        }
        temp1->next=NULL;
        free(temp);
    }
}

void Display(struct node* n) {
    printf("%d->", header->x);
    struct node* temp=n;
    while(temp != NULL) {
        printf("%d ->", temp->x);
        temp = temp->next;
    }
    printf("\n");
}

void add(struct node* n, int data, int index) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    struct node* temp=head;
    new->x = data;
    int i=0;
    while(temp->next!=NULL && i<index) {
        temp = temp->next;
        i+=1;
    }
    new->next = temp->next;
    temp->next = new;
    head->x+=1;
    //printf("%d", temp->x);
}

int main() {
    /* struct node* mergeSortedList=NULL;
    int again=0;
    int data=0;
    int index=0;
    int listno=0;
    do{
    printf("Menu : \n1.)Insert element in list 1\n2.)Insert element in list 2\n3.)Display List\n4.)Merge both the lists\n5.)Insert element at a pos\n6.)Exit\nChoice : ");
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
        printf("Enter the element data : ");
        scanf(" %d", &data);
        insert1(data);
        break;

    case 3:
        printf("Enter the list number to diaplay (1 or 2) : ");
        scanf(" %d", &listno);
        (listno == 1) ? Display(head) : Display(head1);
        break;

    case 4:
        mergeSortedList = mergeSort(head, head1);
        printf("Merge sorted list\n");
        Display(mergeSortedList);
        break;

    case 5:
        printf("Select the list : (1 or 2) ");
        scanf(" %d", &listno);
        printf("Enter data : ");
        scanf(" %d", &data);
        printf("Enter index : ");
        scanf(" %d", &index);
        (listno == 1) ? add(head, data, index) : add(head1, data, index);
    
    default:
        printf("Please enter a valid choice\n");
        break;
    }
    printf("\nAgain (1 or 0) : ");
    scanf(" %d", &again);
    } while(again == 1); */
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    //delete(1);
    //add(head, 2, 2);
    Display(head);

    return 0;
}
