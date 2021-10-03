/*
 *  Author: G Ganesh ganesh@ganesh-HP-Pavilion-Laptop-15-cc1xx 1.0 
 *  Date: 12.08.2020 16:47:10 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	srand(time(0));
	
	char pass[100];
	scanf("%s", pass);
	int len = strlen(pass); 
	int ans[26];
	for(int i=0;i<len;i++) ans[i]=0;
	for(int i=0;pass[i]!='\0';i++){
		if((pass[i]>=97 && pass[i]<=122) || pass[i]==64 || pass[i]==35){
				ans[pass[i]]++;
		}
	}
	for(int i=0;i<26;i++){
		printf("%d ",ans[i]);
	}
	
	
	return 0;
}
