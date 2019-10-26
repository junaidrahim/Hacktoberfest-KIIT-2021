#include<stdio.h>
int main()
{
	float far,cel;
	int ch;

	printf("\n1 : Convert temperature from farenheit to celsius.");
	printf("\n2 : convert temperature from celsius to farenheit.");
	printf("\nEnter your choice (1,2): ");
    scanf("%d",&ch);

	if(ch ==1)
	{
		printf("Enter temperatute in farenheit. ");
		scanf("%f",&far);
		cel=(far-32)/1.8;
		printf("Temperature in celsius: %.2f",cel);

	}
	else if(ch ==2)
	{
		printf("Enter temperature in celsius. ");
		scanf("%f",&cel);
		far=(cel*1.8)+32;
		printf("Temperature in farenheit: %.2f",far);
	}
	else
	{
		printf("\nInvalid Choice !!! ");
	}
  return 0;
}