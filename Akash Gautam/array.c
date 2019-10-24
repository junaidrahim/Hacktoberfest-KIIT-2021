#include<stdio.h>
int array(int x) {
	int i,a[25],s=0;
	printf("Enter the array elements : \n");
	for(i=1;i<=x;i++) {
		scanf("%d",&a[i]);
		s+=a[i];
	}
	return s;
}
int main() {
	int a;
 	printf("Enter the array size : \n");
	scanf("%d",&a);
	int r=array(a);
	printf("The sum of elements is %d",r);
	return 0;
}
	


