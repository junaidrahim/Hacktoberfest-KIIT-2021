/*
 * p3.c
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
 * Q 3. Write a C Program that will generate random numbers within a value and store the values in an array. Display the second maximum in the array as output. Time taken by your code should be order of n.
 * */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int val;scanf("%d",&val);
	int n;scanf("%d",&n);
	srand(time(0));
	int a[n];for(int i=0;i<n;i++) a[i]=rand()%val;
	int max = -100000;
	int max2 = -100000;
	for(int i=0;i<n-1;i++){
		if(a[i]>max){
			max2 = max;max=a[i];
		}else if(a[i]>max2 && a[i]!=max) max2=a[i];
	}
	if(max2==-100000) printf("not present");
	else printf("%d",max2);
	return 0;
}

