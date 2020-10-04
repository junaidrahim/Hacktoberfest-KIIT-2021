#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c=0;
        cin>>n;
        vector<int> v(n),v2;
        for(int &it:v) cin>>it;
        for(auto i = v.begin();i<v.end();i++)
        {
            if(*i>0 and *(i+1)<0)
            {
                c=*(i+1)-*i;

            }
            else if(*i<0 and *(i+1)>0)
        } 
    }
    return 0;
}