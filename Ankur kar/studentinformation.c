#include<stdio.h>
struct name
{
    char fname[25];
    char lname[25];
    int roll;
};
int main()
{    struct name s[5];
     for(int i=0;i<5;i++)
     {
         printf("Enter first name : \n");
         scanf("%s",s[i].fname);
         printf("Enter the last name \n");
         scanf("%s",s[i].lname);
         printf("Enter the roll:\n");
         scanf("%d",&s[i].roll);
     }

  for(int i=0;i<4;i++)
  {
      for(int j=0;j<5-i-1;j++)
      {
          if(s[j].roll>s[j+1].roll)
          {
              struct name temp;
              temp= s[j+1];
              s[j+1]=s[j];
              s[j]=temp;
          }
      }
  }
  for(int i=0;i<5;i++)
  {
      printf("Name : %s %s\n",s[i].fname,s[i].lname);
      printf("Roll :%d\n",s[i].roll);
      printf("\n");
  }
     return 0;
}