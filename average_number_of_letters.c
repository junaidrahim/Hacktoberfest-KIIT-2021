//3. Accept a sentence and print the average number of letters in each word.

#include <stdio.h>
#include<string.h>
#define MAX 100
int main()
{
    char str[MAX];
    printf("Enter the sentence - ");
    scanf("%[^\n]s", str);
    printf("%s\n", str);
    int x = 0, y = 0, sum=0;
    for (int i = 0; i<strlen(str); i++)
    {
        if ( str[i] != ' ')
        {
            y++;
        }
        else
        {
            sum += y;
            x++;
            y = 0;
        }
    }
    sum += y;
    printf ("AVG: %f\n", (float)sum / (x+1));
    return 0;
}
