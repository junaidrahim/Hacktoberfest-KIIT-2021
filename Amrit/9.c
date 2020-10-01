#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//Name : Amrit Ranjan Roll no.: 1928078
struct node_078{
    int data_078;
    struct node_078 *next;
};
struct node_078 *start =NULL;
void create_node_list_078(int);
void insert_begin_078(int);
void insert_end_078(int);
void insert_position_078(int , int);
void delete_begin_078();
void delete_end_078();
void display_078();
void search_078(int);
void delete_specified();
void reverseList();
void sortList_ascending();
int count_078 = 0;
int main()
{
    int i_078,data_078,position_078,n_078;
    for (;;){
        printf("1. Create a linked list\n");
        printf("2. Insert an element at the beginning of linked list.\n");
        printf("3. Insert an element at the end of linked list.\n");
        printf("4. Insert an element at specific position of linked list.\n");
        printf("5. Delete an element from beginning.\n");
        printf("6. Delete an element from end.\n");
        printf("7: Display the elements of the list\n");
        printf("8: Display location of specific element\n");
        printf("9: Delete location of specific element\n");
        printf("10: Reverse the list\n");
        printf("11: Sort list in ascending order");
        scanf("%d", &i_078);
        switch (i_078)
        {
        case 1:
            printf("Enter the no. of nodes");
            scanf("%d", &n_078);
            create_node_list_078(n_078);
            break;
        case 2:
            printf("Enter the value of the element");
            scanf("%d",&data_078);
            insert_begin_078(data_078);
            break;
        case 3:
            printf("Enter the value of the element");
            scanf("%d",&data_078);
            insert_end_078(data_078);
            break;
        case 4:
            printf("Enter the value of the element");
            scanf("%d",&data_078);
            printf("Enter position");
            scanf("%d",&position_078);
            insert_position_078(data_078,position_078);
            break;
        case 5:
            delete_begin_078();
            break;
        case 6:
            delete_end_078();
            break;
        case 7:
            display_078();
            break;
        case 8:
            printf("Enter the position");
            scanf("%d", &position_078);
            search_078(position_078);
            break;
        case 9:
          delete_specified();
        case 10:
          reverseList();
        case 11:
          sortList_ascending();
        default:
            printf("Please enter valid input.\n");
        }
    }
    return 0;
}
void create_node_list_078(int n_078)
{
    struct node_078 *fnNode_078, *tmp_078;
    int data_078, i_078;
    start = (struct node_078 *)malloc(sizeof(struct node_078));

    if(start == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {   
        printf(" Input data for node 1 : ");
        scanf("%d", &data_078);
        start->data_078 = data_078;      
        start->next = NULL;
        tmp_078 = start;
        count_078++;
        for(i_078=2; i_078<=n_078; i_078++)
        {
            fnNode_078 = (struct node_078 *)malloc(sizeof(struct node_078));
            if(fnNode_078 == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i_078);
                scanf(" %d", &data_078);
 
                fnNode_078->data_078 = data_078;  
                fnNode_078->next = NULL;
 
                tmp_078->next = fnNode_078;
                tmp_078 = tmp_078->next; 
                count_078++;
            }
        }
    }
}
void insert_begin_078(int x_078) {
  struct node_078 *t_078;

  t_078 = (struct node_078*)malloc(sizeof(struct node_078));
  t_078->data_078 = x_078;
  count_078++;

  if (start == NULL) {
    start = t_078;
    start->next = NULL;
    return;
  }

  t_078->next = start;
  start = t_078;
}
void insert_end_078(int x_078) {
  struct node_078 *t_078, *temp_078;

  t_078 = (struct node_078*)malloc(sizeof(struct node_078));
  t_078->data_078 = x_078;
  count_078++;

  if (start == NULL) {
    start = t_078;
    start->next = NULL;
    return;
  }

  temp_078 = start;

  while (temp_078->next != NULL)
    temp_078 = temp_078->next;

  temp_078->next = t_078;
  t_078->next = NULL;
}
void insert_position_078(int x_078,int y_078)
{
    struct node_078 *t_078;
    t_078 = (struct node_078*)malloc(sizeof(struct node_078));
    t_078 -> data_078= x_078;	
    int i_078;
    struct node_078 *temp_078= start;
    count_078++;
    if(y_078==1)
    {
    	t_078->next=temp_078;
    	start=t_078;
    	return;
    }
    for(i_078=1;i_078<y_078-1;i_078++)
    {
        temp_078=temp_078->next;
    }
    
    t_078->next = temp_078->next;
    temp_078->next = t_078;
}
void delete_begin_078() {
  struct node_078 *t_078;
  int n_078;

  if (start == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  n_078 = start->data_078;
  t_078 = start->next;
  free(start);
  start = t_078;
  count_078--;

  printf("%d deleted from the beginning successfully.\n", n_078);
}
void delete_end_078() {
  struct node_078 *t_078, *u_078;
  int n_078;

  if (start == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  count_078--;

  if (start->next == NULL) {
    n_078 = start->data_078;
    free(start);
    start = NULL;
    printf("%d deleted from end successfully.\n", n_078);
    return;
  }

  t_078 = start;

  while (t_078->next != NULL) {
    u_078 = t_078;
    t_078 = t_078->next;
  }

  n_078 = t_078->data_078;
  u_078->next = NULL;
  free(t_078);

  printf("%d deleted from end successfully.\n", n_078);
}
void display_078() {
  struct node_078 *t_078;

  t_078 = start;

  if (t_078 == NULL) {
    printf("Linked list is empty.\n");
    return;
  }

  printf("There are %d elements in linked list.\n", count_078);

  while (t_078->next != NULL) {
    printf("%d\n", t_078->data_078);
    t_078 = t_078->next;
  }
  printf("%d\n", t_078->data_078);
}
void search_078(int data_078) {  
    struct node_078 *t_078 = start;  
    int i_078 = 1;  
    bool flag_078 = false;  
      
    if(start == NULL) {  
        printf("List is empty \n");  
    }  
    else {  
        while(t_078 != NULL) {  
            if(t_078->data_078 == data_078) {  
                flag_078 = true;  
                break;  
            }  
            i_078++;  
            t_078 = t_078->next;  
        }  
    }  
    if(flag_078)  
         printf("Element is present in the list at the position: %d\n", i_078);  
    else  
         printf("Element is not present in the list\n");  
}
void delete_specified()  
    {  
        struct node_078 *t_078, *temp_078;  
        int loc,i;
        printf("Enter the location");
        scanf("%d",&loc);  
        t_078=start;  
        for(i=1;i<loc;i++)  
        {  
            temp_078 = t_078;       
            t_078 = t_078->next;  
              
            if(t_078 == NULL)  
            {  
                printf("\nThere are less than %d elements in the list..\n",loc);  
                return;  
            }  
        }  
        temp_078 ->next = t_078 ->next;  
        free(t_078);
        count_078--;  
        printf("\nDeleted %d node ",loc);  
    }
void reverseList()
{
    struct node_078 *t_078, *temp_078;

    if(start != NULL)
    {
        t_078 = start;
        temp_078 = start->next;
        start = start->next;

        t_078->next = NULL;

        while(start != NULL)
        {
            start = start->next;
            temp_078->next = t_078;

            t_078 = temp_078;
            temp_078 = start;
        }

        start = t_078;

        printf("SUCCESSFULLY REVERSED LIST\n");
    }
}
void sortList_ascending() {    
        struct node_078 *current = start, *index = NULL;  
        int temp;  
          
        if(start == NULL) {  
            return;  
        }  
        else {  
            while(current != NULL) {    
                index = current->next;  
                  
                while(index != NULL) {   
                    if(current->data_078 > index->data_078) {  
                        temp = current->data_078;  
                        current->data_078 = index->data_078;  
                        index->data_078 = temp;  
                    }  
                    index = index->next;  
                }  
                current = current->next;  
            }
            printf("List sorted in ascending order");      
        }  
    }      