#include<stdio.h>
#include<stdlib.h>

int main(){
    int n  = 4;
    int *a;
    a = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        a[i] = 0;



    }

    for (int i = 0; i < n; i++){
        
        printf("%d\n", *(a + i));
    }
}

/*prints 
0
0
0
0 */