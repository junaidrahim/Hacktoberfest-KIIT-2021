//30-05-2020
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],arr2[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr2[arr[i]]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}