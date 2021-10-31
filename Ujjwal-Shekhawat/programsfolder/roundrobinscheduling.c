#include<stdio.h>
#include<stdlib.h>

static int count=0;

struct node {
    int process_time;
    struct node* next;
};

struct node* head = NULL;

void insert(int process_time) {
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->process_time = process_time;
    new->next = NULL;
    if(head == NULL) {
        head = new;
        new->next = head;
        //return;
    }
    else {
        struct node* temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        temp->next = new;
        new->next = head;
    }
    
    count++;
}

void Display() {
    struct node* temp = head;
    do {
        printf("%d->", temp->process_time);
        temp=temp->next;
    } while(temp != head);
    printf(" 💮 Remeaning Processes : %d\n", count);
}

void newDelete(struct node* tar) {
    count--;
    if(tar==head && 0) {

    }

    else {
        struct node* temp = tar;
        temp=tar->next;
        tar->process_time = temp->process_time;
        tar->next = temp->next;
        free(temp);
        if(tar->process_time <= 0) {
            newDelete(tar);
        }
    }
}

void ProcessCycle(int trpf) {
    struct node* temp = head;
    int time_deduce = trpf;
    do {
        temp->process_time = temp->process_time-time_deduce;
        temp=temp->next;
        //printf("%d ", x);
    } while(temp != head);
    printf("Remaning time for processes : ");
    Display();
    temp=head;
    do {
        if(temp->process_time <= 0) {
            newDelete(temp);
            //continue;
        }
        temp=temp->next;
    } while(temp != head);
    printf("Removed finished processes : ");
    Display();
}

void FullScheduling(int trpf) {
    while(count > 1) {
        ProcessCycle(trpf);
    }
}

int main() {
    int process_count=0;
    printf("Enter total number of processes : ");
    scanf(" %d", &process_count);
    int initCount=process_count, protection_number=0;
    while (process_count)
    {
        int process_time=0;
        printf("Enter the process time for process %d : ", 1+initCount-process_count);
        scanf(" %d", &process_time);
        insert(process_time);
        protection_number+=process_time;
        process_count--;
    }
    int trpf=0;
    printf("Enter the time deduced per cycle : ");
    scanf(" %d", &trpf);
    //insert(protection_number);
    FullScheduling(trpf);

    return 0;
}