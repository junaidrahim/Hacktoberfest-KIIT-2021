#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>array[i][j];
        }
        
    }
    cout<<"the matrix is"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<array[i][j];
        }
        cout<<endl;
    }
}
