#include<bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c, int k) {
    int e = 100, n = c.size();
    int i = k%n;
    e -= (c[i]*2)+1;
    while(i!=0)
    {
        i = (i+k)%n;
        e -= (c[i]*2)+1;
    }
    return e;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    int result = jumpingOnClouds(v, k);
    cout<<result<<endl;
    return 0;
}