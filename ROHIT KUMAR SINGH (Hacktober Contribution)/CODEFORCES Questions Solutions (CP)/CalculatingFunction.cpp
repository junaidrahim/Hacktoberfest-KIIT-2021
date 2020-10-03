//31-05-2020
#include<iostream>
using namespace std;
int main()
{
    long long n,res;
    cin>>n;
    res=n/2;
    if(n%2!=0)
    {
        res++;
        res*=(-1);
    }
    cout<<res<<endl;
    return 0;
}