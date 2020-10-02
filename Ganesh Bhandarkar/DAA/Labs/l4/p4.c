/*
 *  Author: Mr. ganesh bhandarkar gbgb1bgbg@gmail.com 1.0 
 *  Date: 19.08.2020 16:04:02 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int hoo;
int wS(int l,int e,int *a,int w){
	while(l<=e){
		int m = l+(e-l)/2;
		hoo=m;
		if(a[m]==w)return m;
		if(a[m]>w)return wS(l,m-1,a,w);
		if(a[m]<w)return wS(m+1,e,a,w);		
	}
	return -1;
}
int main(){
	srand(time(0));
	
	int n;
	scanf("%d",&n);
	int w;scanf("%d",&w);
	int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);
	int l=0;
	int e=n;
	int ans = wS(l,e,a,w);
	printf("index : %d weight : %d",ans,a[hoo]);
	return 0;
}
