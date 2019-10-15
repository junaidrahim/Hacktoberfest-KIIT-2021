#include <stdio.h>

int largest(int *a, int *b){
    int largest;

    if(*a > *b)
        largest = *a;
    else
        largest = *b;

    return largest;
}

int main(){
    int x,y,z;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x > y)
        printf("Largest is %d\n", largest(&x, &z));
    else if(y > z)
        printf("Largest is %d\n", largest(&x, &y));
    else if(z > x)
        printf("Largest is %d\n", largest(&y, &z));

    return 0;
}