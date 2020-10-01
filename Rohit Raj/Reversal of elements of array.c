//This program takes input from the user and gives the output of the data in reverse orders
#include<stdio.h>
int main() 
{
   int a[50], i_113, j_113, size_113, temp_113;
 
   printf("\nPlease Enter the size of an array: ");
   scanf("%d",&size_113);
 
   
   for (i_113 = 0; i_113 < size_113; i_113++) 
   {
      scanf("%d", &a[i_113]);
   }
 
   j_113 = i_113 - 1;   
   i_113 = 0;       
 
   while (i_113 < j_113) 
   {
      temp_113 = a[i_113];
      a[i_113] = a[j_113];
      a[j_113] = temp_113;
      i_113++;             
      j_113--;         
   }
 
   printf("\nResult of an Reverse array is: ");
   for (i_113 = 0; i_113 < size_113; i_113++) 
   {
      printf("%d \t", a[i_113]);
   }
 
   return 0;
}
