#include <stdio.h>
#include <stdlib.h>

static int counter = 0;

struct stack {
  int data[100];
  int base;
};

struct que {
  int data[100];
  int front;
};

void init(struct que* q, struct stack* s) {
  s->base = -1;
  q->front = -1;
}

void pushStack(struct stack* s, int data) {
  s->data[++(s->base)] = data;
}

int popStack(struct stack* s) {
  return(s->data[(s->base)--]);
}

void pushQue(struct que* q, int data) {
  q->data[++(q->front)] = data;
}

int popQue(struct que* q) {
  return(q->data[(q->front)--]);
}

void enque(struct que* q, int data) {
  pushQue(q, data);
  counter++;
}

void deque(struct que* q, struct stack* s) {
  for(int i = 0; i <= counter; i++) {
    pushStack(s, popQue(q));
  }
  popStack(s);
  counter--;
  for(int i = 0; i <= counter; i++) {
    pushQue(q, popStack(s));
  }
}

void display(struct que* q)
{
  for (int i = 0;i <= q->front;i++)
    {
      printf(" %d ", q->data[i]);
    }
}

int main() {
  struct stack s;
  struct que q;
  init(&q, &s);
  enque(&q, 10);
  enque(&q, 20);
  deque(&q, &s);
  display(&q);

  return 0;
}
