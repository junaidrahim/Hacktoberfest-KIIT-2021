//code by ARPIT MALLICK
#include <stdio.h>
#include <malloc.h>
struct node 
{
    int data;
	struct node *next;	
};
struct node *top=NULL;
void push()
{
	struct node *newnode;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("\nENTER DATA AT TOP : ");
	scanf("%d",&newnode->data);
	newnode->next = top;
	top = newnode;
}
void pop()
{
	if(top == NULL)
	{
		printf("\nSTACK UNDERFLOW ");	
	}
	else
	{
		struct node *temp;
		temp = top;
		printf("\nTHE VALUE POPPED OUT IS : %d ",top->data);
		top = temp->next;
		free(temp);
	}
}
void printTop()
{
	if(top == NULL)
	{
		printf("\nSTACK IS EMPTY ");
	}
	else
	{
        printf("\nPRINTING THE TOP OF THE STACK : %d ",top->data);
    }
}
void print()
{
	if(top == NULL)
	{
		printf("\nSTACK IS EMPTY ");
	}
	else
	{
		struct node *temp;
		printf("\nSTACK : ");
		temp = top;
		while(temp != NULL)
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}
int main()
{
	int i;
    printf("FOR PUSHING A NEW DATA : 1 \n");
    printf("FOR POPPING OUT A DATA : 2 \n");
    printf("FOR PRINTING THE STACK : 3 \n");
    printf("FOR PRINTING THE TOP OF THE STACK : 4 \n");
    printf("FOR EXITING            : 0 \n");
    do
	{
		scanf("%d",&i);
		switch(i)
		{
			case 1 : push();
		        	break;
			case 2 : pop();
			        break;
			case 3 : print();
			        break;
			case 4 : printTop();
			        break;
			default : printf("\nPROGRAM IS TERMINATED");
		}
	}
	while(i!=0);
	return 0;
}
