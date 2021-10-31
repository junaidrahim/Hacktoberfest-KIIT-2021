#include<stdio.h>
struct dis
{
  int km;
  int m;

}s1,s2;
void add(struct dis s1,struct dis s2)
{  int add;
    int totl_KM=s1.km+ s2.km;
    int total_meter= s1.m+s2.m;
    if(total_meter>=1000)
    {
        add= total_meter/1000;
        total_meter= total_meter%1000;
        totl_KM= totl_KM+add;
    }

    printf("KM : %d\n",totl_KM);
    printf("meter : %d",total_meter);

}
void main()
{ 
    printf("Enter KM : \n");
    scanf("%d",&s1.km);
    printf("Enter meters\n");
    scanf("%d",&s1.m);
    printf("Enter KM : \n");
    scanf("%d",&s2.km);
    printf("Enter meters\n");
    scanf("%d",&s2.m);
  
 add(s1,s2);

}