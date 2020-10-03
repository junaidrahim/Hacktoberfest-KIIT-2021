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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    sort(v.begin(),v.end());
    for(int &it:v) cout<<it<<" ";
    return 0;
}