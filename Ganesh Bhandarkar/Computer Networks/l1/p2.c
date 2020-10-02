/*
 *  Author: Mr. Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 03.08.2020 16:06:44 IST
 * 2. Write a C program to assign values to each members of the following structure. Pass the populated structure to a function Using call-by-address and print the value of each member of the structure with in that function.
struct	info{
int roll_no;
char name[50];
float CGPA;
}   
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
struct info{
	int roll;
	char name[20];
	float CGPA;
	}student;
	
void function(struct info student){
	printf("%d\n",student.roll);
	printf("%s\n",student.name);
	printf("%f\n",student.CGPA);
	}
int main(){
	srand(time(0));
	
	student.roll = 1;strcpy(student.name,"Raj");student.CGPA = 9.8;
	function(student);
	
	
	return 0;
}
