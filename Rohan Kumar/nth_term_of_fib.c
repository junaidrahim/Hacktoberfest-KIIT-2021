#include<stdio.h>
int fib(int n) {
	int a=-1,b=1,c;
	for(int i=0;i<=n;i++) {
		c = a+b;
		a = b;
		b = c;
	}
	return(c);
}

void main() {
	int n,s;
	printf("\nEnter the term place :");
	scanf("%d",&n);
	s=fib(n);
	printf("\nThe number at place %d is : %d",n,s);
}