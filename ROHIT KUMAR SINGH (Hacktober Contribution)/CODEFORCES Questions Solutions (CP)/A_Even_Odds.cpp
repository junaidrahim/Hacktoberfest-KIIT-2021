#include<iostream>
using namespace std;
int main()
{
    long n,k,div=0;
    cin>>n>>k;
    if(n%2==0)
    {
        div = n/2;
    }
    else
    {
        div = (n/2)+1; 
    }
    
    if(k<=div) cout<<(2*k)-1<<endl;
    else cout<<2*(k-div)<<endl;
}