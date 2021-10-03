//Implementation of QUEUE using Array
#include<iostream>
#include<string.h>
using namespace std;

class Queue{
    int front;
    int rear;
    int arr[5];
    public:
    Queue()
    {
        front = -1;
        rear = -1;
        for(int i=0;i<5;i++)
        {
            arr[i] = 0;
        }
    }

    //To check queue is empty or not
    bool is_empty()
    {
        if(front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //To check queue is full or not
    bool is_full()
    {
        if(rear == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //To enter vaue in the queue
    void Enqueue(int val)
    {
        if(is_full())
        {
            cout<<"Queue is full"<<endl;
        }
        else if(is_empty())
        {
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }

    //To remove values from the queue
    int Dequque()
    {
        if(is_empty())
        {
            cout<<"Queque is empty"<<endl;
        }
        if(front == rear)
        {
            int qele = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return qele;
        }
        else
        {
            int qele = arr[front];
            arr[front] = 0;
            front++;
            return qele;
        }
    }

    //To count the no of elements
    int count()
    {
        if(is_empty())
        {
            return 0;
        }
        else{
        return ((rear-front)+1);
        }
    }

    //To display the queue elements
    void display()
    {
        cout<<"The current queue status is:"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

};

//The main function
int main()
{
    Queue Q;
    int value,choice;

    do
    {
        cout<<"\nWhat operation do you want to perform?\nSelect option number.\n"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. is_empty"<<endl;
        cout<<"4. is_full"<<endl;
        cout<<"5. count"<<endl;
        cout<<"6. display"<<endl;
        cout<<"7. clear screen"<<endl;
        cout<<"Enter your choice: ";

        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"\nEnqueue function called"<<endl;
            cout<<"Enter the value to be entered in the queue: "<<endl;
            cin>>value;
            Q.Enqueue(value);
            break;

        case 2:
            cout<<"\nDequeue function called"<<endl;
            Q.Dequque();
            break;

        case 3:
            if(Q.is_empty())
            {
                cout<<"\nQueue is empty"<<endl;
            }
            else
            {
                cout<<"\nQueue is not empty"<<endl;
            }
            break;

        case 4:
            if(Q.is_full())
                {
                 cout<<"\nQueue is full"<<endl;
              }
                else
                {
                    cout<<"\nQueue is not full"<<endl;
                }
            break;

        case 5:
            cout<<"\nThe count function ois called"<<endl;
            cout<<"The total no of elements in the queue are: "<<Q.count()<<endl;
            break;

        case 6:
            cout<<"\nDisplay function is called"<<endl;
            Q.display();
            break;

        case 7:
            system("cls");
            break;

        default:
        if(choice == 0){ 
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
