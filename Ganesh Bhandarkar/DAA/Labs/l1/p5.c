/*
 * p5.c
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
 * Q5. Write a C Program that will read an array consist of positive and negative numbers. Rearrange the numbers in such a way that all positive numbers will be separated from all negative numbers and display it as output. Time taken by the code should be order of n and no additional array must not be considered.
 */

#include <stdio.h>

int main()
{
	int n;scanf("%d",&n);
	int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int j = 0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			if(i!=j){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			j++;
		}
	}
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	return 0;
}

