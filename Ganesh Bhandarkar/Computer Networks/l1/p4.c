/*
 *  Author: Mr. Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 03.08.2020 16:06:56 IST
 * 	4. Write a C Program to enter a number and store the number across the following structure and print the content of each member of the structure. Then aggregate each member of the structure to form the original number and print the same.
	struct	pkt{
	char ch1;
	char ch2[2];
	char ch3;
	};
	* 
	* 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
struct pkt{
	char ch1[1];
	char ch2[2];
	char ch3[1];
}num;
int main(){
	char ch[4],temp[3];
	srand(time(0));
	scanf("%s",num.ch1);
	scanf("%s",num.ch2);
	scanf("%s",num.ch3);
	strcat(num.ch2,num.ch3);
	strcat(ch,temp);
	printf("%s\n\n",num.ch2);
	
	
	printf("%s%s%s",num.ch1,num.ch2,num.ch3);
	
	return 0;
}
 */

#include<stdio.h>
#include<math.h>
struct pkt
{
	char ch1,ch2[2],ch3;
}a;

int power(int a, int b){
	int res = 1;
	while(b>0){
		if(b&1){
			res*=a;
		}
		b=b>>1;
		a*=a;
	}
	return res;
}

int main()
{
	int n;
	printf("\nEnter no");
	scanf("%d",&n);
	a.ch1= (char)*&n;
	a.ch2[0]=(char)*&n+1;
	a.ch2[1]=(char)*&n+2;
	a.ch3=(char)*&n+3;
	printf("%c	",a.ch3);
	printf("Byte 0 %d\nByte 1 %d\nByte 2 %d\nByte 3 %d\n",a.ch1,a.ch2[0],a.ch2[1],a.ch3);
	int arr=(a.ch3*((int)power(256,3))+(a.ch2[1]*((int)power(256,2)))+(a.ch2[0]*((int)power(256,1)))+a.ch1);
	printf("The original number u=is %d",arr);
	return 0;
}

