//A program to implement STACK using Array

#include<iostream>
#include<string.h>

using namespace std;

class stack{
    int top;
    int arr[5];
    public:
    //Constructor
    stack(){
        top = -1;
        for(int i=0;i<5;i++){
            arr[i] = 0;
        }
    }

    //Function to check weather the stack is empty or not
    bool is_Empty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    
    //Function to check weather the stack is full or not
    bool is_full()
    {
        if(top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

    //Function to push value into the stack
    void push(int val)
    {
        if(is_full())
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }

    //Function to pop values from the stack
    int pop()
    {
        if(is_Empty())
        {
            cout<<"Stack Underflow";
            return 0;
        }
        else
        {
            int popelement = arr[top];
            arr[top] = 0;
            top--;
            return popelement;
        }
    }

    //Function to count the no of elements present in the stack(current status)
    int count()
    {
        return (top+1);
    }

    //Function to find the value at perticular location in the stack
    int peek(int pos)
    {
        if(is_Empty())
        {
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }

    //Function to change value at perticular location in the stack
    void change(int pos,int val)
    {
        arr[pos] = val;
        cout<<"Value changed at location "<<pos<<endl;
    }

    //Function to display the elements of the stack
    void display()
    {
        cout<<"Current stack status"<<endl;
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
    }

};

//The main function
int main()
{
    stack S;
    int position,choice,value;
    
    do
    {
        cout<<"\nWhat operation do you want to perform?\nSelect option number.\n"<<endl;
        cout<<"1. pop"<<endl;
        cout<<"2. push"<<endl;
        cout<<"3. is_empty"<<endl;
        cout<<"4. is_full"<<endl;
        cout<<"5. peek"<<endl;
        cout<<"6. count"<<endl;
        cout<<"7. change"<<endl;
        cout<<"8. display"<<endl;
        cout<<"9. clear screen"<<endl;
        cout<<"Enter your choice: ";

        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter the value to be pushed onto the stack: "<<endl;
            cin>>value;
            S.push(value);
            break;

        case 2:
            cout<<"The poped value from the stack is: "<<S.pop()<<endl;
            break;

        case 3:
            if(S.is_Empty())
            {
                cout<<"The stack is Empty"<<endl;
            }
            else
            {
                cout<<"Stack is not empty"<<endl;
            }
            break;

        case 4:
            if(S.is_full())
            {
                cout<<"The stack is full"<<endl;
            }
            else
            {
                cout<<"Stack is not full"<<endl;
            }
            break;

        case 5:
            cout<<"Enter the location of which you want the value: "<<endl;
            cin>>position;
            S.peek(position);
            break;

        case 6:
            cout<<"The total no of elements in the stack are"<<S.count()<<endl;
            break;

        case 7:
            cout<<"Enter the position you want to change the value of: "<<endl;
            cin>>position;
            cout<<"Enter the value to be inserted"<<endl;
            cin>>value;
            S.change(position,value);
            break;
        
        case 8:
            S.display();
            break;

        case 9:
            system("cls");
            break;
        
        default:
        if(choice ==0){ 
            cout<<"Program is Exiting\n"<<endl;
        }
        else
        {
            cout<<"Enter proper option no\n"<<endl;
        }
        
            break;
        }
    }while (choice != 0);
    
    return 0;
}