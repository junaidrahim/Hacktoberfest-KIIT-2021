#include<bits/stdc++.h>
using namespace std;

vector<int> countingSort(vector<int> arr) {
    map<int,int> mp;
    int no = *max_element(arr.begin(),arr.end());
    vector<int> result;
    for(int &it:arr)
    {
        mp[it]++;
    }
    for(int i=0; i<no+1; i++)
    {
        if(mp[i]==0)
        {
            result.push_back(0);
        }
        else
        {
            result.push_back(mp[i]);
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
    //countingSort(v);
    return 0;
}