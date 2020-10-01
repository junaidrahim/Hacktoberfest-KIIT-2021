#include <stdio.h>

int rFact (int n) {
    if(n==0)
        return 1;
    else
        return rFact(n-1)*n;        
}

int iFact (int n) {
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}

int main() {
    int n,ifact,rfact;
    printf("Enter the positive number you want to find factorial of \n");
    scanf("%d",&n);
    rfact = rFact(n);
    ifact = iFact(n);
    printf(" recursive factorial :- %d \n iterative factorial:- %d",rfact,ifact);
    return 0;
}