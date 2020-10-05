#include <stdio.h>
#include <stdlib.h>

struct node {
	int x;
	struct node *next;
};

struct node *head = NULL;

void push(int data) {
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->next = NULL;
	new->x = data;
	struct node *temp = head;
	if (head == NULL) {
		head = new;
	} else {
		new->next = head;
		head = new;
	}
}

void pop() {
	struct node *temp = head;
	if (head->next != NULL) {
        head=head->next;
        free(temp);
    }
}

void Display() {
    struct node* temp = head;
    while(temp != NULL) {
        printf("%d->", temp->x);
        temp=temp->next;
    }
}

int main() {

    int choice=0, again=0, data=0;
	printf("1, push, 2 pop, 3 print : ");
	scanf("%d", &choice);
	do
	{
		switch (choice)
		{
		case 1:
			scanf("%d", &data);
			push(data);
			break;
		case 2:
			pop();
			break;
		case 3:
			Display();
			break;
		default:
			break;
		}
		scanf("%d", &again);
	} while(again == 1);
}