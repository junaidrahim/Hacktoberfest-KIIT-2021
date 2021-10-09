#include<bits/stdc++.h>
using namespace std;

void countSort(vector<vector<string>> arr) {
     map<int,string> mp;
    int n=arr.size();
    for(int i=0;i<n/2;i++)
    {
        int ind = stoi(arr[i][0]);
        mp[ind]+="- ";
    }
    for(int i=n/2;i<n;i++)
    {
        int ind = stoi(arr[i][0]);
        mp[ind]+= arr[i][1]+" ";
    }

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->second;
    }
   
}

int main()
{
    int n;
    cin>>n;
    vector<vector<string>> arr;
    for(int i=0; i<n; i++)
    {
        vector<string> s(2);
        for(string &it:s) cin>>it;
        arr.push_back(s);
    }   

    countSort(arr);
    return 0;
}