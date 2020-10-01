#include <stdio.h>

// iterative fibonacci
int ifib(int n) {
    int t0 = 0, t1 = 1, sum =0;
    if(n<=1)
        return n;
    for(int i=2; i<=n;i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }    
    return sum;
}

// simple recursion fibonacci series 
int rfib(int n) {
    if(n<=1){
        return n;
    }
    return rfib(n-2) + rfib(n-1);
}

// Fibonacci series using Memoization to avoid excessive calls
int F[21]; 
int mfib(int n){
    if(n<=1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2] = mfib(n-2);
        if(F[n-1]==-1)
            F[n-1] = mfib(n-1);
        F[n] = F[n-2] + F[n-1];    
        return F[n-2]+F[n-1];        
    }
    
}
int main(){
    int n;
    printf("Enter the number upto which you want to calculate the fibonacci series:- ");
    scanf("%d",&n);
    printf("The fibonacci series using iterative method sum is:- %d \n",ifib(n));
    printf("The fibonacci series using recursion method is:- %d \n",rfib(n));

    for(int i=0;i<n;i++)
    {
        F[i]=-1;   // intializing the array with -1 for memoization 
    }
    printf("The fibonacci series using memoization recursion is:- %d",mfib(n));
    return 0;
}