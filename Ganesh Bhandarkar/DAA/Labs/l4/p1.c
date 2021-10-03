/*
 *  Author: Mr. ganesh bhandarkar gbgb1bgbg@gmail.com 1.0 
 *  Date: 19.08.2020 16:04:02 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main(){
	srand(time(0));
	
	char s[100];
	fgets(s,sizeof(s),stdin);
	char start;
	char end;
	scanf("%c",&start);
	scanf(" %c",&end);
	int st=0,en=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==start) st++;
		if(s[i]==end) en+=st;
	}
	
	printf("%d",en);
//	if(st>en) printf("%d",st);
//	else if(en>st) printf("%d",en);
//	else if(en==st)printf("%d",en);
	return 0;
}
