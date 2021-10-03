#include <stdio.h>

void headRecursion(int n) {      // head recursion
    if(n>0){
        headRecursion(n-1);
        printf("%d",n);
    }
}

void tailRecursion(int n) {      // tail recursion
    if(n>0){
        printf("%d",n);
        tailRecursion(n-1);
    }
}

int main() {
    int n;
    printf("Enter a number to get headRecursion and Tail Recursion \n");
    scanf("%d",&n);
    printf("\n Head Recursion :- \n");
    headRecursion(n);
    printf("\n Tail Recursion :- \n");
    tailRecursion(n);
    return 0;
}

/* In head recursion, the recursive call, when it happens, comes before other processing 
in the function (think of it happening at the top, or head, of the function).

In tail recursion, it’s the opposite—the processing occurs before the recursive call. 
*/