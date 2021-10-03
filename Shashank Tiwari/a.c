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
    printf("\n\nenter the details : \n");
    printf("enter the name and rollno of students : \n\n");
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i].name);
        scanf("%d",&s[i].rno);
    }
    printf("\n\ndetails of students entered : \n\n");
    for(int i=0;i<n;i++)
    {
        printf("%s ",s[i].name);
        printf("%d\n",s[i].rno);
    }
}
