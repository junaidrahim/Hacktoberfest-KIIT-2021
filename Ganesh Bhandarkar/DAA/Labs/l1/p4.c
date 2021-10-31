/*
 * p4.c
 * 
 * Copyright 2020 Ganesh Bhandarkar <ganesh@mx>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
 /*
  * Write a C Program WAP that will produce random numbers in any range and store it in a martix. Convert it to a tri-diagonal matrix and display the new matrix as output. Time taken by the code should be order of n square 
  */


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int i,j,k;
	srand(time(0));
	int m[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			m[i][j]=rand()%30;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Tridiagnal matrix:\n");
	printf("%d\t%d\n",m[0][0],m[0][1]);
	for(i=1;i<5;i++){
		for(k=1;k<i;k++){
			printf("\t");
		}
		if(i==4) printf("%d\t%d\n",m[4][3],m[4][4]);
		else{
			for(j=i;j<5;j++){
				if(i==j)printf("%d\t%d\t%d",m[i][j-1],m[i][j],m[i][j+1]);
			}
			printf("\n");
		}
	}
    return 0;
}



