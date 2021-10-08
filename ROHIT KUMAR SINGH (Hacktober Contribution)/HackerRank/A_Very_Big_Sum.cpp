#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
    int n;
    long long sum=0;
    cin>>n;
    vector<long long> v1(n);
    for(long long &it:v1) cin>>it;
    for(long long &it:v1) sum+=it;
    cout<<sum;
    return 0;
}