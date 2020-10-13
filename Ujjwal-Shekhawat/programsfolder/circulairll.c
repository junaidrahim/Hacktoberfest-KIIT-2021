#include<stdio.h>
#include<malloc.h>
struct node 
{
int data;
struct node *next;
};
struct node *start=NULL;

int count(struct node *start);

struct node* createll(struct node *start)
{
struct node *ptr,*new_node;
int n;
printf("Enter a number :");
scanf("%d",&n);
while(n!=-1)
{
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=n;
if(start==NULL)
{
new_node->next=new_node;
start=new_node;
}
else{
ptr=start;
while(ptr->next != start)
{
ptr=ptr->next;
}
ptr->next=new_node;
new_node->next=start;
}
printf("Enter a number :");
scanf("%d",&n);

}
return start;
}

struct node* traversell(struct node *start)
{
struct node *ptr;
ptr=start;
printf("The list is : \n");
while(ptr->next!= start)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
printf("%d\t",ptr->data);
return start;
}
void check_list(struct node *start)
{

if(start==NULL)
{
printf("The list is empty .");
}
else
{
printf("The list is not empty");
}

}

struct node* insert_beg(struct node *start)
{
int n;
printf("Enter a number :");
scanf("%d",&n);
struct node *new_node,*ptr;
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=n;
ptr=start;
while(ptr->next!=start)
{
    ptr=ptr->next;
}
ptr->next=new_node;
new_node->next=start;
start= new_node;
return start;
}
struct node* insert_mid(struct node *start)
{
int n,pos,c,i;
struct node *preptr,*ptr,*new_node;
printf("Enter a number :");
scanf("%d",&n);
printf("Enter a position in linked list :");
scanf("%d",&pos);
c=count(start);
if(pos>c)
{
    printf("\nThe number cannot be inserted at that position.");
}
else
{
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=n;
ptr=start;
preptr=ptr;
for(i=1;i<pos;i++)
{
preptr=ptr;
ptr=ptr->next;
}
new_node->next=preptr->next;
preptr->next=new_node;
}
return start;
}
struct node* insert_end(struct node *start)
{
struct node *ptr,*new_node;
int n;
printf("Enter a number :");
scanf("%d",&n);
ptr=start;
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=n;
while(ptr->next != start)
{
ptr=ptr->next;
}
ptr->next=new_node;
new_node->next=start;
return start;
}
struct node* delete_beg(struct node *start)
{
struct node *ptr;
ptr=start;
while(ptr->next!=start)
{
    ptr=ptr->next;
}
ptr->next=start->next;
free(start);
start=ptr->next;
return start;
}
struct node* delete_mid(struct node *start)
{
int pos,i,c;
struct node *ptr,*preptr;
printf("Enter a position  : ");
scanf("%d",&pos);
if(pos>c)
{
    printf("\nThere is no number at that position .");
}
else{
for(i=1;i<pos;i++)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=ptr->next;
free(ptr);
}
return start;
}
struct node* delete_end(struct node *start)
{
struct node *ptr,*preptr;
ptr=start;
while(ptr->next != start)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=start;
free(ptr);
return start;
}
struct node* delete_key(struct node *start)
{
   int val;
printf("Enter a value in the list : ");
scanf("%d",&val);
struct node *ptr,*preptr;
ptr=start;
while(ptr->data != val)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=ptr->next;

free(ptr);
return start;

}
int count(struct node *start)
{
struct node *ptr;
ptr=start;
int count=1;
while(ptr->next != start)
{
count++;
ptr=ptr->next;
}

printf("\nTotal numbers of node :%d",count);
return count;
}
struct node* sort(struct node *start)
{
    struct node *ptr1,*ptr2;
    int t;
    ptr1=start;
    while(ptr1->next!=start)
    {
        ptr2=ptr1->next;
        while(ptr2!=start)
        {
        if(ptr1->data>ptr2->data)
        {
            t=ptr1->data;
            ptr1->data=ptr2->data;
            ptr2->data=t;
        }
        ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    return start;
} 
struct node* search(struct node *start)
{
    struct node *ptr,*preptr;
    int flag=0;
    int n;
    printf("\nEnter a number from the list : ");
    scanf("%d",&n);
    ptr=start;
    while(ptr->next !=start)
    {
        if(ptr->data==n)
        {
            flag=1;
            break;
        }
        ptr=ptr->next;
    }
    if(flag==1)
    {
        printf("The number %d is in the list .",n);
    }
    else{
        printf("The number %d is not in the list .",n);
    }
    return start;
}

int main()
{
int option,c;
printf("Enter values of list\n");

do
{
printf("\n****Main Menu****");
printf("\nCreate list 0");
printf("\nTraverse list 1");
printf("\nCheck list is empty 2");
printf("\nInsert node at start 3");
printf("\nInsert node at any postion 4");
printf("\nInsert node at end 5");
printf("\nDelete node at start 6");
printf("\nDelete node at any position 7");
printf("\nDelete node at end 8");
printf("\nDelete node using key 9");
printf("\nCount total nodes 10");
printf("\nSort list 11");
printf("\nSearch list 12");
printf("\nExit 13");
printf("\nEnter a option :");
scanf("%d",&option);
switch(option)
{
case 0:
start=createll(start);
break;
case 1 :
start=traversell(start);
break;
case 2 : 
check_list(start);
break;
case 3 :
start=insert_beg(start);
break;
case 4:
start=insert_mid(start);
break;
case 5:
start=insert_end(start);
break;
case 6:
start=delete_beg(start);
break;
case 7:
start=delete_mid(start);
break;
case 8:
start=delete_end(start);
break;
case 9:
start=delete_key(start);
break;
case 10:
c=count(start);
break;
case 11:
start=sort(start);
break;
case 12:
start=search(start);
break;
}
}while(option!=13);

return 0;
}