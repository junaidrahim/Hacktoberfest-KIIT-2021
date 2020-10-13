// Insert, delete, search, sorting

//1905725_Ujjwal Singh Shekhawat

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//srand(time(0));

void insertion(int a[], int* size, int* newSize);
void deletion(int a[], int* size);
void sorting(int a[], int* size);
void searching(int a[], int s, int e);

void Display(int*, int);

void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  

void insert(int* a, int element, int pos, int* size, int* newSize) {
    if(*newSize <= *size && pos <= *size) { // Size of array is doubled to optimize for speed as when the insertion is performed and array is not of sufficient size than increase the array size to double sor next insertion it will no re reallocate memory and waste execution speed
        a=(int*)realloc(a, *(size)*(2));
        *newSize=*(size)*(2);
        //return;
    }
    if(pos > *size) {
        printf("Current size is %d can not add element to %d position", *size, pos);
    }

    *size+=1; printf("newSize (%d) ", *newSize);

    for (int i = *size; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = element;

    for (int i = 0; i < *size; i++) {
        printf("%d ", a[i]);
    }

    //Display(a, *(size));
}

void delete(int a[], int pos, int* size) {
    if(*size <= 0) {
        printf("Underflow");
        return;
    }
    for (int i = pos - 1 ; i < *size - 1 ; i++ ) {
        a[i] = a[i+1];
    }

    *size-=1;
    printf("size (%d) ", *size);

    for (int i = 0; i < *size; i++) {
        printf("%d ", a[i]);
    }  
}

void bubbleSort(int a[], int size)  
{  
    int i, j;  
    for (i = 0; i < size-1; i++) {
        for (j = 0; j < size-i-1; j++) {
            if (a[j] > a[j+1])  
            swap(&a[j], &a[j+1]);  
        } 
    }

    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
}

int binarySearch(int a[], int s, int e, int element)
{   
    bubbleSort(a, e);
    if (e >= s) { 
        int m = s + (e - s) / 2; 

        if (a[m] == element) 
            return m; 

        if (a[m] > element) 
            return binarySearch(a, s, m - 1, element); 

        return binarySearch(a, m + 1, e, element); 
    } 

    return -1; 
} 

void Display(int* a, int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d", *(a+i));
    }
    printf("\n");
    
}

int main() {
    int* a;
    int size = 0, search_res = -1;
    printf("Enter the size of the matrix : ");
    scanf(" %d", &size);
    int newSize=0;
    newSize=size;
    a=(int*)malloc(size*sizeof(int));

    for (int i = 0; i < size; i++)
    {
        *(a+i) = 10; 
    }

    //Display(a, size);

    int re;
    do{
    int choice;
    printf("Enter option : \n1.)Insert\n2.)Delete\n3.)Search\n4.)Sort\n5.)Exit\n");  scanf("%d", &choice);

    switch(choice) {
        case 1 : //insert(a, 12, 2, &size);
                 insertion(a, &size, &newSize);
                 break;
        case 2 : deletion(a, &size);
                 break;
        case 3 : searching(a, 0, size);
                 break;
        case 4 : sorting(a, &size);
                 break;
        case 5 : exit(0);
        default : printf("Enter a valid option");
                  break;
    }
    printf("\nTo enter again press 1 : ");
    scanf(" %d", &re);
    } while(re == 1);
    /*insert(a, 12, 2, &size);
    delete(a, 2, &size);
    int search_res = binarySearch(a, 0, size, 4);
    if(search_res != -1) {
        printf("Found at index %d", search_res);
    }
    bubbleSort(a, size);*/
    
    return 0;
}

void insertion(int a[], int* size, int* newSize) {
    int element, position;
    printf("Enter element and position : ");
    scanf("%d %d", &element, &position);
    insert(a, element, position, size, newSize);
}

void deletion(int a[], int* size) {
    printf("Enter element : ");
    int position;
    scanf("%d", &position);
    delete(a, position, size);
}

void sorting(int a[], int* size) {
    bubbleSort(a, *size); // Dreference it before sending check func defination (Yaad rakhna)
}

void searching(int a[], int s, int e) {
    int element; scanf("%d", &element);
    int search_res = binarySearch(a, s, e, element);
    if(search_res != -1) {
        printf("Found at index %d", search_res);
    }
    else {
        printf("Element not found!!!");
    }
}

//Q 2 Write a program to mearge two sorted array without using any sorting technique
//Q 3 Write a program to add two matrix bit a use function for addition bit b use dynamic memory allocation and function for addation for 2d array
//Q 4 Write a program to create student structure with arrtibs name roll no and mark in 5 diffrent subjects
//Q 4 contd. Write a program to calculate the total mark and average mark of all the students bit a Use array of structure and function bit b dynamically create array of structures for n number of students