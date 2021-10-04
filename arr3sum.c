#include <stdio.h>
#include <math.h>
int main(){
    int n,key;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key element: ");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
              int sumsq = a[i]+a[j]+a[k];
              if(sumsq==key)
                printf("%d, %d, %d \n",i,j,k);
            }
        }
    }
    return 0;
}