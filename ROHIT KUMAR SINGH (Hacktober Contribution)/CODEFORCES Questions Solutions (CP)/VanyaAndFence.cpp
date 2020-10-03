//31-05-2020
#include<iostream>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        c++;
        cin>>arr[i];
        if(arr[i]>m)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}