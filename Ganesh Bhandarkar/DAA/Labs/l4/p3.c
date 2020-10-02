/*
 *  Author: Mr. ganesh bhandarkar gbgb1bgbg@gmail.com 1.0 
 *  Date: 19.08.2020 16:04:02 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int BS(int l,int e,int *a,int no){
	if(no<=a[0])return a[0];
	if(no>=a[n-1])return a[n-1];
	int m =0;
	while(l<e){
		m= l+(e-l)/2;
		if(a[m]==no)return a[m];
		if(a[m]>no){
			if(m>0 && no>a[m-1]){
				if(no-a[m-1] >= a[m]-no){
					return a[m];
				}else{
					return a[m-1];
				}
			}
			e=m;
		}else{
			if(m<e-1 && no<a[m+1]){
				if(no-a[m] >= a[m+1]-no){
					return a[m+1];
				}else{
					return a[m];
				}
			}	
		}
				
	}
	return a[m];
}
int main(){
	srand(time(0));
	int n;scanf("%d",&n);
	int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);
	int no;scanf("%d",&no);
	int ans = BS(l,e,a,no);
	printf("%d",ans);
	
	return 0;
}
