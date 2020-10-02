// Created by ganesh bhandarkar
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int n;scanf("%d",&n);
	int m;scanf("%d",&m);
	int a[n],b[m];
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<m;i++)scanf("%d",&b[i]);
	int i=0;
	int j=0;
	int k=0;
	int t[m+n];
	
	while(i<=n && j<=(n+m)){
		if(a[i]<b[j]){
			t[k++]=a[i++];
		}else{
			t[k++]=b[j++];
		}
	}
	while(i<n){
		t[k++]=a[i++];
	}
	while(j<(m+n)){
		t[k++]=b[j++];
	}
	for(int i=0;i<(m+n);i++)printf("%d ",t[i]);
	return 0;
}
