//07-07-2020
#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<b-(a%b)<<endl;
        }
        
    }
    return 0;
}
