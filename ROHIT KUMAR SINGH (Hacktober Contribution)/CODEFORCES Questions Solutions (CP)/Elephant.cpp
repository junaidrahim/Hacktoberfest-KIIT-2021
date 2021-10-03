#include<iostream>
using namespace std;
int main()
{   
    int arr[]={1,2,3,4,5};
    int n,count=0;
    cin>>n;
    int i=4;
    while(n>0)
    {
        int val=n/arr[i];
        n=n%arr[i];
        count+=val;
        i--;
    }
    cout<<count<<endl;
    return 0;
}