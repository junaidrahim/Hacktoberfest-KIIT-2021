#include <stdio.h>

int global_x=0;

int normal_variable_recursion(int n)
{
    if(n>0){
        return normal_variable_recursion(n-1) + n;
    }
}

int static_recursion(int n){
    static int x = 0;
    if(n>0){
        x++;
        return static_recursion(n-1) + x; 
    }
    return 0;
}

int global_recursion(int n) {
    if(n>0){
        global_x++;
        return global_recursion(n-1) + global_x;
    }
    return 0;
}

int main(){
    int n;
    printf(" Enter a number :- ");
    scanf("%d",&n);
    printf("\n Normal variable declared recursion:- \n %d ",normal_variable_recursion(n));
    printf("\n Static variable Recursion :- \n %d ",static_recursion(n));
    printf(" \n Global variable decalred recursion:- \n %d ",global_recursion(n));
    return 0;
}