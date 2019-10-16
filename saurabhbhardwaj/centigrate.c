#include <stdio.h>
void main()
{
	int f;
	printf("Please enter the Temperature in Fahrenheit :\n");
	scanf("%d",&f);
	int c=(((f-32)*5)/9);
	printf("Temperature in centigrade is %d Degree Celsius\n",c);
}
