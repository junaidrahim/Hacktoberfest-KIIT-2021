
#include<stdio.h>
int main(){
	int i,a,s=0,n,l,u;
	printf("Enter the no of people\n");
	scanf("%d",&n);
	printf("enter the age group from lower to higher ");
	scanf("%d%d",&l,&u);
	printf("enter the age");
	for( i=0;i<n;i++){
		scanf("%d",&a);
		if(a>l&&a<u)
			s++;
	}
	printf("The number of people in the age group are %d\n",s);
	return 0;
}
