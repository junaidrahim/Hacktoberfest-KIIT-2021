#include<bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    map<int,int> mp;
    vector<int> result;
    for(int &it:arr)
    {
        mp[it]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        int fir = it->first;
        int val = it->second;
        while(val--)
        {
            result.push_back(fir);
        }
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    vector<int> result = countingSort(v);
    for(int &it:result) cout<<it<<" ";
    return 0;
}