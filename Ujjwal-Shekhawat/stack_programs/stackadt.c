#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Stack{
    int stack_array[MAX_SIZE];
    int top;
};

struct Stack* ctor(struct Stack* this){
    this->top = -1;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        this->stack_array[i] = 0;
    }
}

void push(struct Stack* a, int x) {
	if (a->top >= MAX_SIZE - 1) {
		printf("%d Overflow\n", a->top);
		return;
	}
	a->top = a->top + 1;
	a->stack_array[a->top] = x;
}

int pop(struct Stack* a) {
	if (a->top == -1) {
		printf("Underflow\n");
		return 0;
	}
    int tmp = a->top;
	a->top = a->top - 1;
	return a->stack_array[tmp];
}

void Display(int a[], int *top) {}

void printStack(struct Stack* a) {
	if (a->top != -1) {
		int tmp = pop(a);
		printf("%d ", tmp);
		printStack(a);
		push(a, tmp);
	}
}

int main() {
    struct Stack stack_array;

    int choice=0, again=0, data=0;
	printf("1, push, 2 pop, 3 print : ");
	scanf("%d", &choice);
	do
	{
		switch (choice)
		{
		case 1:
			scanf("%d", &data);
			push(&stack_array, data);
			break;
		case 2:
			pop(&stack_array);
			break;
		case 3:
			printStack(&stack_array);
			break;
		default:
			break;
		}
		scanf("%d", &again);
	} while(again == 1);

	return 0;
}