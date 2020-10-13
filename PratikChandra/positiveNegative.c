#include<stdio.h>
int main(){
	int a,p=0,n=0;
	printf("Enter the set of numbers\n");
	while(a!=0){
		scanf("%d",&a);
	if(a<0)
		n++;
	else
		p++;
	}
	printf("The number of positive numbers %d and number of negative numbers %d \n",p,n);
	return 0;
}
