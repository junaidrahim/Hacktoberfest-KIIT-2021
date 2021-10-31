#include<stdio.h>

void main()
{
int i,f=0;

struct date
{
int date;
int month;
int year;
};

struct date d[2];

for(i=0;i<2;i++)
{
printf("\nEnter day for the %d) date\n",i+1);
scanf("%d",&d[i].date);
printf("\nEnter the month for the %d) date\n",i+1);
scanf("%d",&d[i].month);
printf("\nEnter the year for the %d) date\n",i+1);
scanf("%d",&d[i].year);
}

if(d[0].date==d[1].date)
{
if(d[0].month==d[1].month)
{
if(d[0].year==d[1].year)
{
f=1;
}
}
}

if(f==1)
printf("\nThe dates are equal");

else
printf("\nThe dates are not equal");
}