#include <stdio.h>

int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;    
}

int nCr(int n,int r){
    int num,den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}

// recursive nCr
int recursiveNCR(int n,int r){
    if(n==r || r==0)
        return 1;
    return recursiveNCR(n-1,r-1) + recursiveNCR(n-1,r);    
}
int main(){
    int n,r;
    printf("Enter n and r for calculating nCr:- \n");
    scanf("%d %d",&n,&r);
    printf("nCr :- %d \n",nCr(n,r));
    printf("nCr using recursion:- %d",recursiveNCR(n,r));
    return 0;
}