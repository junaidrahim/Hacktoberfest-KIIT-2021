/*
 *  Author: Mr. Ganesh Bhandarkar ganesh@mx 1.0 
 *  Date: 03.08.2020 16:07:02 IST
 * 	5. Write a C program to check whether the Host machine is in Little Endian or Big Endian. Enter a number, print the content 
 * 	of each byte location and Convert the Endianness of the same i.e. Little to Big Endian and vice-versa.
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

unsigned LtoB(unsigned int x){
	return (((x>>24) & 0x000000FF) | ((x>>8) & 0x0000FF00) | ((x<<8) & 0x00FF0000) | ((x<<24) & 0xFF000000));
}

int main(){
	srand(time(0));
	
	int Little_int = 0xAABBCCDD;
	printf("L_e = 0x%X\n", Little_int);
	printf("L_e = 0x%X\n", LtoB(Little_int));
	return 0;
}
