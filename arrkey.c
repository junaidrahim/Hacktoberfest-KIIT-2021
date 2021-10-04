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
            double sumsq = pow(a[i],2)+ pow(a[j],2);
            if((int)sumsq==key)
              printf("The matching i and j for the given key %d is %d and %d",key,i,j);
        }
    }
    return 0;
}