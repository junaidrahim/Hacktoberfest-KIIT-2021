//29-05-2020
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    if(s==t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}