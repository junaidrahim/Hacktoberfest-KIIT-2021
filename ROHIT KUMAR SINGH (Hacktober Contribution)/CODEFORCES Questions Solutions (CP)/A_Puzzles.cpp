#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    sort(v.begin(),v.end());
    cout<<v.at(n-1)-v.at(0)<<endl;
    return 0;
}