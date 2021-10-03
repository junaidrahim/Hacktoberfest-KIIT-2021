//IMPLEMENTATION OF LINK LIST

#include<stdio.h>
#include<stdlib.h>

    struct node
    {
        //The node will contain 2 values, the data part and the add of the next node
        int data;
        struct node *next;
    };
    //head will contain the start node
    //newnode will contain the newly made node
    void main(){
    struct node *head,*newnode,*temp;
    int choice = 0;
    head = 0;

    while(choice){
    //Allocation of memory dinamically(cration of new node)
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value:");
    scanf("%d",&newnode->data);

    if(head == 0){
        //if the starting node is empty (the entered node is the first node or starting node)
        head = temp = newnode;
    }
    else{
        //if the starting node is not empty
        temp->next = newnode;
        temp = newnode;
    }
    printf("\nDo you want to continue(0/1)? :");
    scanf("%d",&choice);
    }
    temp = head;
    printf("/nThe current node values are:");
    //To print the current values in the link list
    while (temp != 0)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }


}
