// Created by ganesh bhandarkar
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int max=-10000;
int min=10000;
void mxMin(int *a,int l,int h){
	int maxT,minT;
	if(l==h){
		if(max<a[l])max = a[l];
		if(min>a[h])min = a[h];
		return;
	}
	if(h-l == 1){
		if(a[l]<a[h]){
			if(min>a[l]) min = a[l];
			if(max<a[h]) max = a[h];
		}else{
			if(min>a[h]) min = a[h];
			if(max<a[l]) max = a[l];
		}
		return;
	}
	int mid=(l+h)/2;
	mxMin(a,l,mid);
	maxT=max;
    minT=min;
	mxMin(a,mid+1,h);
    if(max<maxT) max=maxT;
    if(min>minT) min=minT;
}
int main(){
	srand(time(0));
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	
	mxMin(a,0,n-1);
	printf("%d %d",min,max);
	return 0;
}
