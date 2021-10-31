#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n][n];
    int ans[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>array[i][j];
        }
    }
    int update[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            update[j]=array[i][j];
        }
        for (int k = 0; k < n ; k++)
        {
            ans[k][i]=update[k];
            update[k]=0;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
