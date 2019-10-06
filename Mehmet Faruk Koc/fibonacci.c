#include<stdio.h>    
int fibonacci(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n - 1) + fib(n - 2); 
} 
  
int main() 
{ 
    int n; 
    printf("Fibonnacci serie until nth number.\n");
    printf("Enter n please: ");
    scanf("%d",&n);
    int i;
    for(int i=0;i<n;i++)
        printf("%d ", fibonacci(i)); 
    getchar(); 
    return 0; 
} 
