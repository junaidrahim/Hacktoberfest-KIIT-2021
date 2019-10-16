#include<stdio.h>
int main(){
	int a,s=0;
	printf("Enter the age of 100 people\n");
	for(int i=0;i<100;i++){
		scanf("%d",&a);
		if(a>50&&a<60)
			s++;
	}
	printf("The number of people in the age group 50 to 60 are %d\n",s);
	return 0;
}