#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;

    // map<int,int> hashmap;
    // for(auto i=v.begin(); i!=v.end();i++)
    // {
    //     hashmap[*i]++;
    // }

    // int max = 0,val=0;
    // for(auto i=hashmap.begin(); i!= hashmap.end(); i++)
    //     {
    //         // cout<<i->first<<"->"<<i->second<<endl;
    //         if(i->second>max)
    //         {
    //             max = i->second;
    //             val = i->first;
    //         }
    //     }
    //     cout<<val;
    auto val = find(v.begin(), v.end(),v.front());
    cout<<find(v.begin(), v.end(), 3) - val;
}