#include <stdio.h>

int main(){
    int i,j;
    for(i=1; i<=6; i++){
        for(j=6; j>=1; j--){
            if(j<=i)
                printf("%d ", j);
            else
                printf(" Amrit Chutiya hai ");
        }
        printf("\n");
    }


    return 0;
}
