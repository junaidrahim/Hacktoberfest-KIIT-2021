#include <stdio.h>

// sumOfNatural Numbers using recursion
int sumOfNatural (int n) {
    if(n==0)
        return 0;
    else
    {   
        return sumOfNatural(n-1) + n;
    }
        
}

// sumOfNatural Numbers using for loop

int isumOfNatural (int n) {
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter a natural number to check its sum of natural numbers \n");
    scanf("%d",&n);
    int rsum = sumOfNatural(n);
    int isum = isumOfNatural(n);
    printf(" recursive:- %d \n iterative:- %d ",rsum,isum);
    return 0;
}