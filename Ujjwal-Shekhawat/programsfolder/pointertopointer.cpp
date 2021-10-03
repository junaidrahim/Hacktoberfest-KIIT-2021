#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
//srand(time(0)); // Seed

int main(int argc, char** argv) {

    /* for (int i = 0; i < argc; i++)
    {
        std::cout << argv[i];
    } */
    
    if(argc>=2){
    int** x;

    x = (int**)malloc(2*(sizeof(int*)));

    for (int i = 0; i < 2; i++)
    {
        *(x+i) = (int*)malloc(10 * sizeof(int));
    }
    

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            //scanf("%d", (*(x+i) + j) );//int* x ; scanf("%d", x);
            std::cin >> x[i][j];
            //std::cin >> (*(*(x+i) + j));// = (rand() % (100 - 1 + 1)) + 1;
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", *(*(x+i)+j));
        }
        printf("\n");
        
    }
    }
    
    
    return 0;
    
}