//Codeforces div2
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
        int n;
        cin>>n;
        vector<int> v(n),v2,v3;
        for(int &it:v) cin>>it;
        reverse(v.begin(),v.end());
        for(int &it:v) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}