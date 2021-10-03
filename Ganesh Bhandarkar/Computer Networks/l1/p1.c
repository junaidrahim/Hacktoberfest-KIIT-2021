/*
 *  Author: Mr. Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 03.08.2020 15:54:52 IST
 * 1. Write a C program to swap the content of 2 variables using pointer.
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	
	int a,b;
	scanf("%d%d",&a,&b);
	printf("before a = %d, b= %d",a,b);
	int *x = &a;int *y = &b;
	int t = *x;
	*x = *y;
	*y = t;
	printf("after a = %d, b = %d",a,b);
	return 0;
}
