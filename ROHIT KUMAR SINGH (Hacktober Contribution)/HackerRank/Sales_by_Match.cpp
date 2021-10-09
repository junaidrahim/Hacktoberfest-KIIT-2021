#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    int c = 0;
    map<int, int> hash;
    for (auto i = ar.begin(); i != ar.end(); i++)
    {
        hash[*i]++;
    }

    for (auto it = hash.begin(); it != hash.end(); it++)
    {
        c+=(it->second)/2 ;
    }
     return c;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &it : v)cin >> it;
    // int result = sockMerchant(n, v);
    int r = sockMerchant(n, v);
    cout<<r;
}