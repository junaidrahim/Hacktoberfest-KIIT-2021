#include<stdio.h>

struct students
{
    char name[20];
    int rno;
};
void main()
{
    printf("enter the no of students : ");
    int n;
    scanf("%d",&n);
    struct students s[n];
    printf("\n\nenter the details : \n\n")
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[n].name);
        scanf("%d",&s[n].rno);
    }
    printf("\n\ndetails of students entered : \n\n")
    for(int i=0;i<n;i++)
    {
        printf("%s",s[n].name);
        printf("%d",s[n].rno);
    }
}