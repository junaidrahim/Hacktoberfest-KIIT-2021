#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<cmath>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    vector<int> v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(),v.end());
    int sum_req = ceil(float(accumulate(v.begin(), v.end(),0))/float(2));
    while((accumulate(v.begin(), v.end(),0))>=sum_req)
    {
        v.pop_back();
        count++;
    }
    cout<<count;
    return 0;
}