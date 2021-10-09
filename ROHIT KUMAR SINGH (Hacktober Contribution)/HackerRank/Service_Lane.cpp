#include<bits/stdc++.h>
using namespace std;

vector<int> serviceLane(int n, vector<vector<int>> cases,vector<int> width) {
    int len = cases.size();
    vector<int> result;
    for(int i=0; i<len; i++)
    {
        int ele = *min_element(width.begin()+cases[i][0],width.begin()+cases[i][1]+1);
        result.push_back(ele);
    }
    return result;
}


int main()
{
    int n,t;
    cin>>n>>t;
    vector<int> width(n);
    for(int &it:width) cin>>it;
    vector<vector<int>> cases;
    vector<int> temp(2);
    for(int i=0;i<5;i++)
    {
        for(int &it:temp) cin>>it;
        cases.push_back(temp);
    }
    vector<int> result = serviceLane(n, cases,width);
    for(int &it:result) cout<<it<<endl;
    return 0;
}