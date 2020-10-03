//21-05-2020
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    bool a,b,c;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if((a+b+c)>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}