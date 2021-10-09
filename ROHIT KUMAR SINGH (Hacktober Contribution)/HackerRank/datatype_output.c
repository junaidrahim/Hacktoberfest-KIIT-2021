#include<stdio.h>
int main()
{
    float a=0.5,b=0.7;
    if(b < 0.7)
    {
        if(a < 0.5)
            printf("Hi");
        else
            printf("Hello");
    }
    else
        printf("Bye");
    
    return 0;
}