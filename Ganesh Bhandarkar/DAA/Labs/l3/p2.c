/*
 *  Author: G Ganesh ganesh@ganesh-HP-Pavilion-Laptop-15-cc1xx 1.0 
 *  Date: 12.08.2020 16:18:55 IST
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int sumo=0,sume=0;
void IS(int arr[],int n){ 
	
	for (int i = 2; i < n; i++){ 
      int j = i-1; 
      int key = arr[i]; 
      if ((i+1)&1){ 
		 sume+=key; 
         while(key >= arr[j] && j >= 0){ 
            arr[j+1] = arr[j]; 
            j--; 
         } 
         arr[j+2] = key;  
                   
      }else{ 
        // while(key <= arr[j] && j >= 0){ 
        //    arr[j+1] = arr[j]; 
        //   j--; 
        // } 
        // arr[j+1] = key;
         sumo+=key;    
      } 
   } 
} 
  


int main(){
	srand(time(0));
	
	int n;scanf("%d",&n);
	int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
	IS(a,n);
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n%d %d",sume,sumo);
	
	return 0;
}
