//07-07-2020
#include<iostream>
#include<algorithm>
#include<string.h>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    set<int> set1;
    cin>>s;
    for(char c:s)
    {
        set1.insert(tolower(c));
    }
    if(set1.size()==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}