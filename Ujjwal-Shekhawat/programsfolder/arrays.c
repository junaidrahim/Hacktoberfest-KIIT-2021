// Insert, delete, search, sorting

//1905725_Ujjwal Singh Shekhawat

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//srand(time(0));

void insertion(int a[], int* size);
void deletion(int a[], int* size);
void sorting(int a[], int* size);
void searching(int a[], int s, int e);

void swap(int *x, int *y)  
{  
    int temp = *x;  
    *x = *y;  
    *y = temp;  
}  

void insert(int a[], int element, int pos, int* size) {
    if(*size >= 10) {
        printf("Overflow");
        return;
    }
    *size+=1; printf("size (%d) ", *size);
    for (int i = *size; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = element;

    for (int i = 0; i < *size; i++) {
        printf("%d ", a[i]);
    }
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

int main() {
    int a[10];
    int size = 0, search_res = -1;
    for (int i = 0; i < 9; i++)
    {
        a[i] = (rand() % (100 - 1 + 1)) + 1; 
        size+=1;
    }
    int re;
    do{
    int choice;
    printf("Enter option : \n1.)Insert\n2.)Delete\n3.)Search\n4.)Sort\n5.)Exit\n");  scanf("%d", &choice);

    switch(choice) {
        case 1 : //insert(a, 12, 2, &size);
                 insertion(a, &size);
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
    scanf("%d", &re);
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

void insertion(int a[], int* size) {
    int element, position;
    scanf("%d %d", &element, &position);
    insert(a, element, position, size);
}

void deletion(int a[], int* size) {
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