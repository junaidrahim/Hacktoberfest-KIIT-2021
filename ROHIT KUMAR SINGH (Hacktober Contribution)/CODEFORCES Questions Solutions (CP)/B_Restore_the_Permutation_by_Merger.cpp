#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        vector<int> v,v2;
        int x;
        cin>>x;
        for(int j=0;j<x*2;j++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
        for(auto it=v.begin(); it<v.end(); it++)
        {
            if(count(v2.begin(),v2.end(),*it))
            {
                continue;
            }
            else
            {
                v2.push_back(*it);
            }
            
        }
        for(auto it=v2.begin(); it<v2.end(); ++it)
        {
           cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
