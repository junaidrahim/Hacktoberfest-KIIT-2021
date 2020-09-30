
#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	char name[10];
	int rolln;
	int marks[5];
	int totmarks;
	int avgmarks;
}students;
int n;
students *s;	
void in()
{
	for(int i=0;i<n;i++)
	{
		printf("\n Student no. %d ",(i+1));
		printf("\n Name : ");
		scanf("%s[^\n]",&(s+i)->name);
		printf("\n Roll Number : ");
		scanf("%d",&(s+i)->rolln);
		printf("\n Marks in 5 subjects : ");
		for(int j=0;j<5;j++)
			scanf("%d",&(s+i)->marks[j]);
		(s+i)->totmarks=0;
		(s+i)->avgmarks=0;
	}
}

void totalm()
{

	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<5;j++)
		 sum+=(s+i)->marks[j];
		(s+i)->totmarks=sum;
		(s+i)->avgmarks=(sum/5);
		
	}
}

void disperticular()
{
	printf("\n Roll Number of the student you want to see : ");
	int num;
	scanf("%d",&num);
	for(int i=0;i<n;i++)
	{
		if(num==(s+i)->rolln)
		{
			printf("\n Name : %s ",(s+i)->name);
			printf("\n Roll Number : %d ",(s+i)->rolln);
			printf("\n Marks in 5 Subjects : ");
			for(int k=0;k<5;k++)
				printf("%d \t",(s+i)->marks[k]);
			printf("\n Total Marks : %d",(s+i)->totmarks);
			printf("\n Average Marks : %d",(s+i)->avgmarks);
		}
		else
			printf("\n No student available with the given roll number.");
	}
}
int main()
{
	printf("Enter Number of students : ");
	scanf("%d",&n);
	s=malloc(n*sizeof(students));
	in();
	totalm();
	disperticular();
	return 0;
}