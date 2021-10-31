#include<stdio.h>
struct st{
	int salary;
	char n[22],ge[33],d[66];
	float g;
};
void main(){
struct st emp[222];
for(int i=0;i<10;i++){
	printf("Enter Name of employee: ");
	scanf("%s",emp[i].n);
	printf(" enter gender: ");
	scanf("%s",emp[i].ge);
	printf(" enter department ");
	scanf("%s",emp[i].d);
	printf("Enter basic salary: ");
	scanf("%d",&emp[i].salary);
	float da=0.75*emp[i].salary;
	float hra=0.25*emp[i].salary;
	emp[i].g=emp[i].salary+hra+da;	
}
for(int i=0;i<10;i++){
	printf("\nEmployee: %s\n",emp[i].n);
	printf("gender: %s\n",emp[i].ge);
	printf("department: %s\n",emp[i].d);
	printf("Basic salary: %d\n",emp[i].salary);
	printf("Gross: %.2f",emp[i].g);
}
}