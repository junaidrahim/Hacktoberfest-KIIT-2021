//C program to convert the given temperature in Fahrenheit by the user and convert it into Celsius.
#include<stdio.h>
void main()
{
	float F,C;
	printf("Enter the temperature in degree Fahrenheit : \n");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("The temperature in degree Celsius is = %f",C);
}
