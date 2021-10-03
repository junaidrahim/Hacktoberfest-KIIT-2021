#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        vector<int> v(x);
        for(auto &itr:v)
        {
            cin>>itr;
        }
        vector<int> v2=v;
        sort(v.begin(),v.end());
        if(v==v2)
        {
            cout<<0<<endl;
        }
        else
        {
            
        }
        
    }
    return 0;
}
