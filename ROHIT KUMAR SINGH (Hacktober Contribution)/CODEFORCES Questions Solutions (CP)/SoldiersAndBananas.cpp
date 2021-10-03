//28-05-2020
#include<iostream>
using namespace std;
int main()
{
    int k,w,n,c=0;
    cin>>k>>w>>n;
    for(int i=1;i<=n;i++)
    {
        c+=i;
    }
    
    if((c*k)<=w)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<(c*k)-w<<endl;
    }
    
return 0;

}