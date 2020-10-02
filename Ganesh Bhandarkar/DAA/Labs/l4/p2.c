/*
 *  Author: Mr. ganesh bhandarkar gbgb1bgbg@gmail.com 1.0 
 *  Date: 19.08.2020 16:04:02 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int TS(int f,int e,int key,int *a){
	if(f>e)return -1;
	while(e>=f){ 
        int m1=f+(e-f)/3; 
        int m2=e-(e-f)/3; 
        if(a[m1]==key)return m1; 
        if(a[m2]==key)return m2; 
        if(key<a[m1])e=m1-1;
        else if(key>a[m2])f=m2+1; 
        else{ 
			f=m1+1; 
			e=m2-1; 
        } 
    }
    return 0;
}

int main(){
	srand(time(0));
	int n;
	scanf("%d",&n);
	int a[n];for(int i=0;i<n;i++)scanf("%d",&a[i]);
	int f=0;
	int e=n;
	int key; scanf("%d",&key);
	int p = TS(f,e,key,a);
	printf("%d",p);
	return 0;
}
