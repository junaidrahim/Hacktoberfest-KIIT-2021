#include<stdio.h>
#include<stdlib.h>
#define MAX 10

typedef struct {
    int data[MAX];
    int top;
} STACK;


int push(STACK *S, int v){
    if(S->top == MAX - 1){
        printf("stack-overflow\n");
        return 1;
    }

    S->top++;
    S->data[S->top] = v;
    return 0;

}

int pop(STACK *S, int *k){
    if(S->top == -1){
        printf("stack-underflow\n");
        return 1;
    }

    *k = S->data[S->top];
    S->top--;
    return 0;
}

int main(){
    STACK S1;
    S1.top = -1;
    
    int err1 = push(&S1, 88); // 0 if done properly, 1 if something went wrong.
    err1 = push(&S1, 999);
    int popped;

    int err2 = pop(&S1, &popped);
    printf("%d\n", popped);
    err2 = pop(&S1, &popped);
    printf("%d\n", popped);

}