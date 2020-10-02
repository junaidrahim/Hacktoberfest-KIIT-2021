/*
 *  Author: Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 05.08.2020 17:39:47 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
typedef long long ll;
int c=0;

int gcd(int a, int b) 
{ 
	c++;
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
}
int main(){
	srand(time(0));
	
	int a,b;scanf("%d%d",&a,&b);
	int ans = gcd(a,b);
	printf("%d %d",ans,c);
		
	return 0;
}
