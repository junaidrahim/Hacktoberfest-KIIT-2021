//15-05-2020
#include<iostream>
using namespace std;
int main()
{
    //inputs
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //outputs
    int kth = arr[k-1];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=kth && arr[i]!=0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}