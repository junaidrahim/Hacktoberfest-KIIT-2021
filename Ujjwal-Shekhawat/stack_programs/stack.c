#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void push(int a[], int *top, int x) {
	if (*top >= MAX_SIZE - 1) {
		printf("%d Overflow\n", *top);
		return;
	}
	*top = *top + 1;
	a[*top] = x;
}

int pop(int a[], int *top) {
	if (*top == -1) {
		printf("Underflow\n");
		return 0;
	}
    int tmp = *top;
	*top = *top - 1;
	return a[tmp];
}

void Display(int a[], int *top) {}

void printStack(int a[], int *top) {
	if (*top != -1) {
		int tmp = pop(a, top);
		printStack(a, top);
		printf("%d ", tmp);
		push(a, top, tmp);
	}
}

int main() {
	int stack_array[MAX_SIZE], top = -1;

	int choice=0, again=0, data=0;
	printf("1, push, 2 pop, 3 print : ");
	scanf("%d", &choice);
	do
	{
		switch (choice)
		{
		case 1:
			scanf("%d", &data);
			push(stack_array, &top, data);
			break;
		case 2:
			pop(stack_array, &top);
			break;
		case 3:
			printStack(stack_array, top);
			break;
		default:
			break;
		}
		scanf("%d", &again);
	} while(again == 1);

	return 0;
}