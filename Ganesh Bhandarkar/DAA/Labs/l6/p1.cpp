// Created by ganesh bhandarkar
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void merge_asc(int *a, int s, int e){
	int i=s;
	int mid = (s+e)/2;
	int j = mid+1;
	int t[100];
	int k=s;
	while(i<=mid && j<=e){
		if(a[i]<a[j]){
			t[k++]=a[i++];
		}else{
			t[k++]=a[j++];
		}
	}
	while(i<=mid){
		t[k]=a[i];
		k++;i++;
	}
	while(j<=e){
		t[k]=a[j];
		k++;j++;
	}
	for(int i=s;i<=e;i++){
		a[i]=t[i];
	}
}
void merge_dec(int *aa, int s, int e){
	int i=s;
	int mid = (s+e)/2;
	int j = mid+1;
	int t[100];
	int k=s;
	while(i<=mid && j<=e){
		if(aa[i]>aa[j]){
			t[k++]=aa[i++];
		}else{
			t[k++]=aa[j++];
		}
	}
	while(i<=mid){
		t[k]=aa[i];
		k++;i++;
	}
	while(j<=e){
		t[k]=aa[j];
		k++;j++;
	}
	for(int i=s;i<=e;i++){
		aa[i]=t[i];
	}
}
void mergeSort(int *a, int *aa, int s, int e){
	if(s>=e)return;
	int mid = (s+e)/2;
	mergeSort(a,aa,s,mid);
	mergeSort(a,aa,mid+1,e);
	merge_asc(a,s,e);
	merge_dec(aa,s,e);
}
int main(){
	srand(time(0));
	int n;
	scanf("%d",&n);
	int a[n],aa[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		aa[i]=a[i];
	}
	mergeSort(a,aa,0,n-1);
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
	for(int i=0;i<n;i++)printf("%d ",aa[i]);
	return 0;
}
