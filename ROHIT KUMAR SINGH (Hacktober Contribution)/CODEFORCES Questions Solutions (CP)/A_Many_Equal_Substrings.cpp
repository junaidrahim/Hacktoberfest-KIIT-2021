#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

bool palincheck(string s)
{
    if(s.front() == s.back())
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int k,n;
    cin>>n>>k;
    int kcheck = k;
    string s,finalstr;
    cin>>s;
    if(s.length()==1)
    {
        while(k--)
        {
            finalstr+=s;
        }
    }
    else if(palincheck(s))
    {
        finalstr = s;
        k--;
        s.erase(0,1);
        while (k--)
        {
            finalstr+=s;
        }
    }
    else{
        while(k--)
        {
            finalstr+=s;
        }
    }
    cout<<finalstr<<endl;
    return 0;
}