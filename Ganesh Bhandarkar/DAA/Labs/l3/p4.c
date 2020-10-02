/*
 *  Author: G Ganesh ganesh@ganesh-HP-Pavilion-Laptop-15-cc1xx 1.0 
 *  Date: 12.08.2020 16:57:45 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
	srand(time(0));
	
	int n;scanf("%d",&n);
	int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int f[n];
	for(int i=0;i<n;i++) f[i]=0;
	for(int i=0;i<n;i++){
		f[a[i]]++;
	}
	int fk = 1;
	for(int i=0;i<n;i++){
		if(f[i]>=ceil(n/2)){
			printf("%d",f[i]);
			fk= 0;
		}
	}
	if(fk==1) printf("NOt present");
	return 0;
}
