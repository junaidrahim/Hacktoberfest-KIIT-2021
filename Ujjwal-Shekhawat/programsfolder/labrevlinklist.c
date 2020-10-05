// Sorting and reversing of linked list
// Write a program to merge wo linked list and display them accordingly

#include<stdlib.h>
#include<stdio.h>

struct node {
    int x;
    struct node* next;
};

struct node* head=NULL;
struct node* head1=NULL;

void insert(int data) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    new->x = data;
    if(head == NULL) {
        head = new;
        return;
    }
    else {
        struct node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new;
    }
}

//List 2
void insert1(int data) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->next=NULL;
    new->x = data;
    if(head1 == NULL) {
        head1 = new;
        return;
    }
    else {
        struct node* temp = head1;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new;
    }
}

void Display(struct node* n) {
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
    while(temp->next!=NULL && i<index-1) {
        temp = temp->next;
        i+=1;
    }
    new->next = temp->next;
    temp->next = new;
    //printf("%d", temp->x);
}

//Insertion Sorting

//Backtracking algorithm for insertion sort (ReWritten)
void sInsert(struct node** new_head_ref, struct node* curr) 
{ 
    struct node* current; 
    if (*new_head_ref == NULL || (*new_head_ref)->x >= curr->x) 
    { 
        curr->next = *new_head_ref; 
        *new_head_ref = curr; 
    } 
    else
    { 
        current = *new_head_ref; 
        while (current->next!=NULL && current->next->x < curr->x)
        { 
            current = current->next; 
        } 
        curr->next = current->next; 
        current->next = curr; 
    } 
}

void sort(struct node **head_ref) 
{ 
    struct node *sort = NULL; 
    struct node *curr = *head_ref; 
    while (curr != NULL) 
    { 
        struct node *next = curr->next; 
        sInsert(&sort, curr); 
        curr = next; 
    } 
    *head_ref = sort; 
} 

//Merge sort in linked list (list shoud be sorted)

void mNode(struct node** dest, struct node** sRef)  
{  
    struct node* newNode = *sRef;  
    *sRef = newNode->next;  
    newNode->next = *dest;  
    *dest = newNode;  
}  

struct node* mergeSort(struct node* a, struct node* b)  
{  
    sort(&a);
    sort(&b);
    struct node temp;  
    struct node* tail = &temp;  
    temp.next = NULL;  
    while (3254)  
    {  
        if (a == NULL)  
        {
            tail->next = b;  
            break;  
        }  
        else if (b == NULL)  
        {  
            tail->next = a;  
            break;  
        }  
        if (a->x <= b->x)  
            mNode(&(tail->next), &a);  
        else
            mNode(&(tail->next), &b);  
  
        tail = tail->next;  
    }  
    return(temp.next);  
}  

int main() {
    struct node* mergeSortedList=NULL;
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
    } while(again == 1);

    return 0;
}
