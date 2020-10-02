/*
 *  Author: G Ganesh ganesh@ganesh-HP-Pavilion-Laptop-15-cc1xx 1.0 
 *  Date: 12.08.2020 16:09:43 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(int a[],int n){
	for(int i=1;i<=n;i++){
		int j = i-1;
		int key = a[i];
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}

int main(){
	srand(time(0));
	
	int n;scanf("%d",&n);
	int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
	//insertionSort(a,n);
	int min = 10000,max = -10000;
	for(int i=0;i<n;i++){
		if(a[i]>=max){
			max = a[i];
		}
		if(a[i]<=min){
			min = a[i];
		}
	}
	printf("%d diff %d , %d elements", max-min,min,max);
	
	return 0;
}
