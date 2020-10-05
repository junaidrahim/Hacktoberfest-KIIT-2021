#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10
#define PARENT_SIZE 20

void push1(int a[], int *top1, int *top2, int x) {
	if (*top1 > *top2) {
		printf("%d Overflow\n", *top1);
		return;
	}
	*top1 = *top1 + 1;
	a[*top1] = x;
}

void push2(int a[], int *top2, int *top1, int x) {
	if (*top1 > *top2) {
		printf("%d Overflow\n", *top2);
		return;
	}
	*top2 = *top2 - 1;
	a[*top2] = x;
}

int pop1(int a[], int *top) {
	if (*top == -1) {
		printf("Underflow\n");
		return 0;
	}
	int tmp = *top;
	*top = *top - 1;
	return a[tmp];
}

int pop2(int a[], int *top) {
	if (*top == -1) {
		printf("Underflow\n");
		return 0;
	}
	int tmp = *top;
	*top = *top + 1;
	return a[tmp];
}

void Display(int a[], int *top) {}

void printStack1(int a[], int *top1, int* top2) {
	if (*top1 != -1) {
		int tmp = pop1(a, top1);
		printStack1(a, top1, top2);
		printf("%d ", tmp);
		push1(a, top1, top2, tmp);
	}
}

void printStack2(int a[], int *top2, int* top1) {
	if (*top2 != PARENT_SIZE) {
		int tmp = pop2(a, top2);
		printStack2(a, top2, top1);
		printf("%d ", tmp);
		push2(a, top2, top1, tmp);
	}
}

int main() {
	int stack_array1[MAX_SIZE], top1 = -1;
	int stack_array2[MAX_SIZE], top2 = PARENT_SIZE;
	int stack_array3[PARENT_SIZE];

	int choice=0, again=0, data=0;
	printf("1, push1, 2 pop1, 3 print1 : ");
	scanf("%d", &choice);
	do
	{
		switch (choice)
		{
		case 1:
			scanf("%d", &data);
			push1(stack_array1, &top1, &top2, data);
			break;
		case 2:
			pop1(stack_array1, &top1);
			break;
		case 3:
			printStack1(stack_array1, &top1, &top2);
			break;
		default:
			break;
		}
		scanf("%d", &again);
	} while(again == 1);

	printf("1, push2, 2 pop2, 3 print2 : ");
	scanf("%d", &choice);
	do
	{
		switch (choice)
		{
		case 1:
			scanf("%d", &data);
			push2(stack_array2, &top2, &top1, data);
			break;
		case 2:
			pop2(stack_array2, &top2);
			break;
		case 3:
			printStack2(stack_array2, &top2, &top1);
			break;
		default:
			break;
		}
		scanf("%d", &again);
	} while(again == 1);
    
	return 0;
}