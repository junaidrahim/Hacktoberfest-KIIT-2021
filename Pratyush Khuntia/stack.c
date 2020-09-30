#include <stdio.h>
#include <stdlib.h>

typedef struct STACK_S
{
	int size;
	int *arr;
	int top;
} stack;

void init(stack *s, int size);
void push(stack *s, int x);
void pop(stack *s);
int top(stack *s);

int main()
{
	stack s;

	init(&s, 10);
	push(&s, 1);
	push(&s, 1);
	push(&s, 2);
	push(&s, 4);
	push(&s, 12);

	printf("%d\n", top(&s));

	pop(&s);
	pop(&s);

	printf("%d\n", top(&s));

	return 0;
}

void init(stack *s, int size)
{
	s->size = size;
	s->arr = malloc(sizeof(int) * size);
	s->top = 0;
}

void push(stack *s, int x)
{
	if (s->top + 1 == s->size)
		puts("Stack Overflow");
	else
	{
		s->arr[s->top] = x;
		++(s->top);
	}
}

void pop(stack *s)
{
	if (s->top == 0)
		puts("Stack Underflow");
	else
	{
		s->arr[s->top-1] = 0;
		--(s->top);
	}
}

int top(stack *s)
{
	return *(s->arr + s->top - 1);
}
