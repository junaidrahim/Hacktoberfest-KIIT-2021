#include <stdio.h>
#include <stdlib.h>

typedef struct QUE{
    int arr[10];
    int max_size;
    int front;
    int rear;
} que;

que q;

void insert(int p_data) {
    if(q.rear > q.max_size) {
        printf("Overflow\n");
        q.rear--;
        return;
    }
    q.arr[q.rear] = p_data;
    q.rear++;
}

void Delete() {
    if(q.front >= q.rear) {
        printf("Underflow\n");
        q.front = 0;
        q.rear = 0;
        return;
    }
    q.front++;
}

void display() {
    for (int i = q.front; i < q.rear; i++)
    {
        printf("%d->", q.arr[i]);
    }
    printf("\n");
}

void Reverse() {
    for (int i = q.front, j = q.rear; i < q.rear, j < q.front; i++, j--)
    {
        if(i >= j) {
            break;
        }
        int temp = q.arr[i];
        q.arr[i] = q.arr[j];
        q.arr[j] = temp;
    }
    
}

int main() {
    q.front = q.rear = 0;
    q.max_size = 10;

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