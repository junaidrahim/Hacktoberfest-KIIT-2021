#include <stdio.h>
int main()
{

    int r, c;
    printf("enter the number of rows: ");
    scanf("%d", &r);
    printf("enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the number to search: ");
    int num;
    scanf("%d", &num);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == num)
            {
                printf("An occurrence of entered number- %d found!!\n", num);
                if (i == 0)
                {
                    if (j == 0)
                    {
                        printf("%d   %d\n", arr[i][j + 1], arr[i + 1][j]);
                    }
                    else if (j == c - 1)
                    {
                        printf("%d   %d\n", arr[i][j - 1], arr[i + 1][j]);
                    }
                    else
                    {
                        printf("%d   %d    %d\n", arr[i][j - 1], arr[i + 1][j], arr[i][j + 1]);
                    }
                }
                else if (i == r - 1)
                {
                    if (j == 0)
                    {
                        printf("%d   %d\n", arr[i][j + 1], arr[i - 1][j]);
                    }
                    else if (j == c - 1)
                    {
                        printf("%d   %d\n", arr[i][j - 1], arr[i - 1][j]);
                    }
                    else
                    {
                        printf("%d   %d    %d\n", arr[i][j - 1], arr[i - 1][j], arr[i][j + 1]);
                    }
                }
                else
                {
                    if (j == 0)
                    {
                        printf("%d   %d   %d\n", arr[i][j + 1], arr[i - 1][j], arr[i + 1][j]);
                    }
                    else if (j == c - 1)
                    {
                        printf("%d   %d   %d\n", arr[i][j - 1], arr[i - 1][j], arr[i + 1][j]);
                    }
                    else
                    {
                        printf("%d   %d   %d   %d\n", arr[i][j - 1], arr[i - 1][j], arr[i][j + 1], arr[i + 1][j]);
                    }
                }
            }
        }
    }
}
// [[1,2,3,4,5],
//  [3,2,5,1,6],
//  [6,4,9,2,1],
//  [7,1,2,8,0]]

// to find the neighbouring elements of a number in a 2D matrix
