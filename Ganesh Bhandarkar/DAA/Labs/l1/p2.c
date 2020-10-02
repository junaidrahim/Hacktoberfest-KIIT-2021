/*
 * p2.c
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
// {
// 	"version": "2.0.0",
// 	"tasks": [
// 		{
// 			"type": "shell",
// 			"label": "C/C++: clang build active file",
// 			"command": "/usr/bin/clang",
// 			"args": [
// 				"-g",
// 				"${file}",
// 				"-o",
// 				"${fileDirname}/${fileBasenameNoExtension}"
// 			],
// 			"options": {
// 				"cwd": "${workspaceFolder}"
// 			},
// 			"problemMatcher": [
// 				"$gcc"
// 			],
// 			"group": "build"
// 		}
// 	]
// }

#include <stdio.h>

int main()
{
	int n;scanf("%d",&n);
	int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
	int key; scanf("%d",&key);
	for(int i=0;i<n-2;i++){
		for(int j=1;j<n-1;j++){
			for(int k=2;k<n;k++){
				if(a[i]+a[j]+a[k]==key){
					printf("i =%d j =%d k =%d",a[i],a[j],a[k]);
					break;
				}
			}
		}
	}
	return 0;
}

