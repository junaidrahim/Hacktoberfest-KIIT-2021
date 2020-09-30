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

void ordered_insert(stack *s)
{
	int a[] = {9,6,7,3,1,8,4,8,7,5};
	for (int i = 0; i <10; i++){
		stack temp;
		init(&temp, 10);

		if(s->top == 0) {
			push(s, a[i]);
			continue;
		}

		while(top(s) <= a[i] && s->top!=0) {
			push(&temp, top(s));
			pop(s);
		}

		push(s, a[i]);

		while(temp.top != 0){
			push(s, top(&temp));
			pop(&temp);
		}
	}
}

int main()
{
	stack s;
	init(&s, 11);
	ordered_insert(&s);

	while(s.top != 0){
		printf("%d ", top(&s));
		pop(&s);
	}

	return 0;
}

void init(stack *s, int size)
{
	s->size = size;
	s->arr = (int *)malloc(sizeof(int) * size);
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
		s->arr[s->top - 1] = 0;
		--(s->top);
	}
}

int top(stack *s)
{
	return *(s->arr + s->top - 1);
}
