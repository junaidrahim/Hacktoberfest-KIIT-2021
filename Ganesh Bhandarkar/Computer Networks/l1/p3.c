/*
 *  Author: Mr. Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 03.08.2020 16:06:49 IST
 * 3. Write a C program to extract each byte from a given number and store them in separate character variables and print the content of those variables.
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	/*
	unsigned int value = 0x11223344;
	unsigned char a,b,c,d;
	a=(value&0xFF); //extract first byte
    b=((value>>8)&0xFF); //extract second byte
    c=((value>>16)&0xFF); //extract third byte
    d=((value>>24)&0xFF); //extract fourth byte

    printf("a= %02X\n",a);
    printf("b= %02X\n",b);
    printf("c= %02X\n",c);
    printf("d= %02X\n",d);
    * */
    
    int x = 256;
    int a = (x>>24)&0xFF;
    int b = (x>>16)&0xFF;
    int c = (x>>8)&0xFF;
	int d = (x)&0xFF;
	
	printf("Integer Shift Bit Extraction \n");
	printf("a= %d\n",a);
    printf("b= %d\n",b);
    printf("c= %d\n",c);
    printf("d= %d\n",d);
    
    
    printf("\n\n\n Character Shift Bit Extraction");
    char *ch = (char *) &x;
    printf("%d",*ch);
    ch++;
    printf("%d",*ch);
    ch++;
    printf("%d",*ch);
    ch++;
    printf("%d",*ch);
    
	
	return 0;
}
