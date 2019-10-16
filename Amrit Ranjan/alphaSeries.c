#include <stdio.h>

int main(){
    for(int i=0; i<5; i++){
        for(int j=65; j<=69-i; j++){
            printf("%c ", (char)j);
        }
        printf("\n");
    }


    return 0;
}