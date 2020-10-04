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
    int n;
    cin>>n;
    string str="";
    for(int i=0; i<n; i++)
        {
            char c;
            cin>>c;
            str+=c;
        }
    int z = count(str.begin(),str.end(),'0');
    int o = n-z;
    cout<<abs(z-o)<<endl;
    return 0;
}