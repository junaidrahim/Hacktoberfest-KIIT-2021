#include <stdio.h>
#include <math.h>

int main(void)
{
    //this is program to check whether a number is prime or not

    int range;
    int c = 0;

    printf("Enter the range: ");
    scanf("%d", &range);

    for (int i = 2; i < range; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                c++;
                break;
            }
            else
            {
                c = 0;
            }
        }
        if (c == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}