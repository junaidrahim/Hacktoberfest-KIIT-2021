#include <stdio.h>

int rpower(int m,int n) {
    if(n==0)
        return 1;
    return rpower(m,n-1)*m;    
}

int optimizedPower(int m,int n) {
    if(n==0)
        return 1;
    if(n%2==0)
        return optimizedPower(m*m,n/2);
    return m*optimizedPower(m*m,(n-1)/2);        
}

int main() {
    int m,n;
    printf("Enter the numbers m and n which you want to find the power ");
    scanf("%d %d",&m,&n);
    printf(" The power using normal recursion :- %d \n",rpower(m,n));
    printf(" The power using optimized recursion :- %d",optimizedPower(m,n));
    return 0;
}