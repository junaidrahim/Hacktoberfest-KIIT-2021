#include <stdio.h>
#define N 20

int Q[N], Pr[N];
int fr = -1, rr = -1;

void enqueue(int data, int p)
{
    int i;
    if ((fr == 0) && (rr == N - 1))
        printf("Queue is full");
    else
    {
        if (fr == -1)
        {
            fr = rr = 0;
            Q[rr] = data;
            Pr[rr] = p;
        }
        else if (rr == N - 1)
        {
            for (i = fr; i <= rr; i++)
            {
                Q[i - fr] = Q[i];
                Pr[i - fr] = Pr[i];
                rr = rr - fr;
                fr = 0;
                for (i = rr; i > fr; i--)
                {
                    if (p > Pr[i])
                    {
                        Q[i + 1] = Q[i];
                        Pr[i + 1] = Pr[i];
                    }
                    else
                        break;
                    Q[i + 1] = data;
                    Pr[i + 1] = p;
                    rr++;
                }
            }
        }
        else
        {
            for (i = rr; i >= fr; i--)
            {
                if (p > Pr[i])
                {
                    Q[i + 1] = Q[i];
                    Pr[i + 1] = Pr[i];
                }
                else
                    break;
            }
            Q[i + 1] = data;
            Pr[i + 1] = p;
            rr++;
        }
    }
}
void print()
{
    int i;
    for (i = fr; i <= rr; i++)
    {
        printf("\nElement = %d\tPriority = %d", Q[i], Pr[i]);
    }
}
int dequeue()
{
    if (fr == -1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Deleted Element = %d\t Its Priority = %d", Q[fr], Pr[fr]);
        if (fr == rr)
            fr = rr = -1;
        else
            fr++;
    }
}
int main()
{
    int opt, n, i, data, p;
    printf("Enter Your Choice:-");
    do
    {
        printf("\n\n1. Insert the Data in Queue\n2. Show the Data in Queue \n3. Delete the data from the Queue\n0. Exit\n");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter the number of data: ");
            scanf("%d", &n);
            printf("\nEnter your data and Priority of data: \n");
            i = 0;
            while (i < n)
            {
                scanf("%d %d", &data, &p);
                enqueue(data, p);
                i++;
            }
            break;
        case 2:
            print();
            break;
        case 3:
            dequeue();
            break;
        case 0:
            break;
        default:
            printf("\nIncorrect Choice\n");
        }
    } while (opt != 0);
    return 0;
}
