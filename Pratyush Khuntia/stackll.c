#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

typedef struct{
	struct node *top;
} STACK;


int push(STACK *S, int num){
	struct node *curr = (struct node *)malloc(sizeof(struct node));
	if(curr == NULL){
		printf("stack-overflow\n");
		return 1;
	}

	curr->data = num;
	curr->next = NULL;
	if(S->top == NULL){
		S->top = curr;
	}

	else{
		curr->next = S->top;
		S->top = curr;
	}

	return 0;

}

int pop(STACK *S, struct node **k){
	if(S->top == NULL){
		printf("stack-underflow\n");
		return 1;
	}

	*k = S->top;
	S->top = S->top->next;
	return 0;

}


int main(){

	STACK S1;
	S1.top = NULL;

	int err = push(&S1, 99);
	// err = push(&S1, 69);

	struct node *k;

	printf("inside: %d\n", S1.top->data);

	int err1 = pop(&S1, &k);
	printf("%d\n", k->data);

}