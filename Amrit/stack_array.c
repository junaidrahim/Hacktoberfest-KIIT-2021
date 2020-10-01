# include<stdio.h>
# include<stdlib.h>
//Name : Amrit Ranjan Roll no.: 1928078
// Defining The Stack Dynamic Array
struct DAStack{
	int *arr;
    int size;
	int top;
};

// Function to initialise the stack
struct DAStack* initialise(int size)
{
	// Create memory for stack
	struct DAStack *temp = (struct DAStack *)malloc(sizeof(struct DAStack));
    temp->size = size;
	temp->arr = (int*)malloc(temp->size*sizeof(int));
	temp->top = -1;
	return temp;
}

int FullStack(struct DAStack* temp){
    return temp->top == temp->size -1;
}
int EmptyStack(struct DAStack* temp){
    return temp->top == -1;
}


void push(struct DAStack* temp, int data){
    if(FullStack(temp))
        return;
    temp->arr[++temp->top] = data;
}
int pop(struct DAStack* temp){
    if (EmptyStack(temp)){
        printf("Stack is empty");
    }
    return temp->arr[temp->top--];
}
void printrecc(struct DAStack* temp){
    if(temp->top>=0){
        int data = pop(temp);
        printrecc(temp);
        printf("%d", data);
    }
    else return;
    
}
int main()
{
	int n = 0;
    int choice;
    int data;
    int t;
	printf("Enter size of the array : ");
	scanf("%d",&n);
	struct DAStack *temp = initialise(n);
    push(temp,1);
    push(temp,2);
    push(temp,3);
    push(temp,4);
    push(temp,5);
    printrecc(temp);
	return 0;
}
