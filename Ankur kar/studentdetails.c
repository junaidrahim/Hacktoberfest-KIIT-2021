#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int m[5];
}std;
void main()
{
    printf("enter the name of the student:\n");
    scanf("%s",std.name);
    printf("enter the roll number of the student:\n");
    scanf("%d", &std.roll);
    printf("Enter the marks of the student\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&std.m[i]);
    }
    printf("Name: %s\n",std.name);
    printf("Roll no: %d\n",std.roll);
    printf("Marks: \n");
    for(int i=0;i<5;i++)
    {
        printf("%d \n",std.m[i]);
    }
}