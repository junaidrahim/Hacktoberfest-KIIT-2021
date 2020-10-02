/*
 * p1.c
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
 * You should have received a copy of the GNU Gene
 * ral Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.r
 * 
 * 
 */
 
 /*
  * Q1. Write a C Program that will read an array of elements and display the following, 
  * Duplicate elements present in the array with their frequency and the duplicate element with highest frequency of occurrence. 
  * Time taken by the code should be order of n.
  * */


#include <stdio.h>

int main()
{
	int n;scanf("%d",&n);
	int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int f[n];
	for(int i=0;i<n;i++) f[i]=0;
	int max = -1000000;
	for(int i=0;i<n;i++){
		f[a[i]]++;
	}
	int num = 0;
	for(int i=0;i<n;i++){
		if(f[i]){
			if(max < f[i]){
				num = i;
				max = f[i];
			} 
			printf("%d -> %d\n",i,f[i]);
		}
	} 
	printf("%d has max frequency",num);
	return 0;
}

