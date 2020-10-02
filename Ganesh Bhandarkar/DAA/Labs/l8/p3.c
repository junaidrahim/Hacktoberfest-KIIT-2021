// #include<stdio.h>
// #include<math.h>
// #include<limits.h>


// void minEle(int *a){ 
//     int me = a[0];
//     int x = -1;
//     int s = sizeof(a)/sizeof(int);
//     for (int i=1;i<5;i++){
//         if(me > a[i]){
//             me = a[i];
//             x = i;
//         }
//     } 
//     //return x;
//     int t = a[x+1];
//     a[x+1] = a[s];
//     a[s] = t;
//     s=s-1;
// } 

// int main(){
//     int a[] = {16, 10 , 5 , 3 , 1};
//     int s = sizeof(a)/sizeof(int);
// 	minEle(a);
//     //printf("%d    ",n);
// 	for(int i=0;i<s;i++){
// 		printf("%d ",a[i]);
// 	}
	
// 	return 0;
// }

#include <stdio.h>
void max_heap(int *a, int m, int n) {
   int j, t;
   t = a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] > a[j])
         j = j + 1;
      if (t > a[j])
         break;
      else if (t <= a[j]) {
         a[j / 2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void build_maxheap(int *a, int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}
int main() {
   int n, i;
  printf("enter size");
scanf("%d",&n);
   int a[30];
   for (i = 1; i <= n; i++) {
     printf("enter element");
 scanf("%d",&a[i]);
   }
   build_maxheap(a, n);
    printf("max heap");
   for (i = 1; i <= n; i++) {
      printf("%d  ",a[i]);
   }
printf("\ninsert");
int new;
scanf("%d",&new);
a[++n]=new;

 build_maxheap(a, n);
    printf("\nmax heap\n");
   for (i = 1; i <= n; i++) {
      printf("%d  ",a[i]);
   }
printf("\ndelete loc");
int del;
scanf("%d",&del);
a[del]=a[n];
n--;
 build_maxheap(a, n);
  for (i = 1; i <= n; i++) {
      printf("%d  ",a[i]);
   }
}