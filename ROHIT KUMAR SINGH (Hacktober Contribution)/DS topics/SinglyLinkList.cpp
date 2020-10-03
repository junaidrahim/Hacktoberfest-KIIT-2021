//Implementation of Singly Link List

#include<iostream>
using namespace std;

class Node
{
    public:
    int key;
    int data;
    Node *next;

    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }

    Node(int k,int d)
    {
        key = k;
        data = d;
    }
};

class SinglyLinkList{
    public:
    Node *head;

    SinglyLinkList()
    {
        head = NULL;
    }

    SinglyLinkList(Node* n)
    {
        head = n;
    }

    //To check the node exists or not
    Node *nodeExist(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;

        while(ptr!=NULL)
        {
            if(ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    //TO append node at the end of the link list
    void appendNode(Node* n)
    {
        if(nodeExist(n->key)!=NULL)
        {
            cout<<"\n*** Node with key value: "<<n->key<<"Already exists ***\n*** Please try again ***"<<endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout<<"\n*** Node Appended Sucessfully ***"<<endl;

            }
            else
            {
                Node *ptr = head;
                while(ptr->next!=NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout<<"\n*** Node Appended Sucessfully ***"<<endl;

            }
            
            
        }
        
    }

    //TO prepend node at the start of the link list
    void prependNode(Node *n)
    {
        if(nodeExist(n->key)!=NULL)
        {
            cout<<"\n*** Node with key value: "<<n->key<<"Already exists ***\n*** Please try again ***"<<endl;
        }
        else
        {
            n->next = head;
            head = n;
            cout<<"\n*** Node Prepended Sucessfully ***"<<endl;
        }
    }

    //To insert at perticular location
    void insertNode(int k,Node *n)
    {
        Node *ptr = nodeExist(k);

        if(ptr == NULL)
        {
            cout<<"\n*** No such node exists ***"<<endl;
        }
        else
        {
            if(nodeExist(n->key)!=NULL)
            {
                cout<<"\n*** Node with key value: "<<n->key<<"Already exists ***\n*** Please try again ***"<<endl;
            }

            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout<<"\n*** Node Inserted Sucessfully***"<<endl;
            }
            
        }
        
    }

    //To delete perticular node
    void deleteNode(int k)
    {
        if(head == NULL)
        {
            cout<<"\n*** Link List is Empty ***"<<endl;
        }
        else if(head!=NULL)
        {
            if(head->key == k)
            {
                head = head->next;
                cout<<"\n*** Node Deleted Sucessfully ***"<<endl;
            }
            else
            {
                Node *temp = NULL;
                Node *preptr = head;
                Node *curptr = head->next;

                while(curptr !=NULL)
                {
                    if(curptr != NULL)
                    {
                        temp = curptr;
                        curptr = NULL;
                    }
                    else
                    {
                        preptr = preptr->next;
                        curptr = curptr->next;
                    }
                }
                
                if(temp != NULL)
                {
                    preptr->next = temp->next;
                    cout<<"\n*** Node Deleted Sucessfully ***"<<endl;
                }
                else
                {
                    cout<<"\n*** Node does not exists ***"<<endl;
                }
                
            }
            
        }
        
    }

    //TO update a perticular node value
    void updateNode(int k,int d)
    {
        Node *ptr = nodeExist(k);

        if(ptr != NULL)
        {
            ptr->data = d;
            cout<<"\n*** Node Data Updated Sucessfully ***"<<endl;
        }
        else
        {
            cout<<"\n*** Node Does Not Exists ***"<<endl;
        }
        
    }

    //To display the link list contentt(Nodes)
    void display()
    {
        if(head == NULL)
        {
            cout<<"\n*** No node exists in the link list ***"<<endl;
        }
        else
        {
            cout<<"\n*** Singly Link List Elements Are: ***\n"<<endl;
            Node *temp = head;

            while(temp != NULL)
            {
                cout<<"("<<temp->key<<","<<temp->data<<") -->";
                temp = temp->next;
            }
        }
        
    }
};

//The main function
int main()
{
    SinglyLinkList S;
    int k1,key1,data1;
    int choice;

     do
    {
        cout<<"\n\nWhat operation do you want to perform?\nSelect option number.\nEnter 0 to exit.\n"<<endl;
        cout<<"1. Append"<<endl;
        cout<<"2. Prepend"<<endl;
        cout<<"3. Insert"<<endl;
        cout<<"4. Delete"<<endl;
        cout<<"5. Update"<<endl;
        cout<<"6. display"<<endl;
        cout<<"7. clear screen"<<endl;
        cout<<"Enter your choice: ";

        Node *n1 = new Node();
        cin>>choice;

        switch (choice)
        {
            case 1:
                cout<<"Append option selected:\nEnter the key and data to input in the node: ";
                cin>>key1>>data1;
                n1->key = key1;
                n1->data = data1;
                S.appendNode(n1);
                break; 
            case 2:
                cout<<"Prepend option selected:\nEnter the key and data to input in the node: ";
                cin>>key1>>data1;
                n1->key = key1;
                n1->data = data1;
                S.prependNode(n1);
                break;
            case 3:
                cout<<"Insert option selected:\nEnter the key after you want to add the node: "<<endl;
                cin>>k1;
                cout<<"Enter the key and data to input in the node:"<<endl;
                cin>>key1>>data1;
                n1->key = key1;
                n1->data = data1;
                S.insertNode(k1,n1);
                break;
            case 4:
                cout<<"Delete option selected:\nEnter the key whose node you want to delete: "<<endl;
                cin>>k1;
                S.deleteNode(k1);
                break;
            case 5:
                 cout<<"Update option selected:\nEnter the key of the node whose data you want to update: "<<endl;
                cin>>key1;
                cout<<"Enter the new data to be inserted: ";
                cin>>data1;
                S.updateNode(key1,data1);
                break;
            case 6:
                 cout<<"\nDisplay option selected: "<<endl;
                 S.display();
                 break;
            case 7:
                system("clear");
                break;
            default:
                if(choice ==0)
                {
                    cout<<"Exiting the program..."<<endl;
                }
                else
                {
                    cout<<"\nEnter the proper choice number."<<endl;
                }
                break;
        }
    }while(choice !=0);

    return 0;
}