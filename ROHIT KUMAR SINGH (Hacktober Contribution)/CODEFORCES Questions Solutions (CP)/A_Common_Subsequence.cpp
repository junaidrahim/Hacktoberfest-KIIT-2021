#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int n,m,c=0;
        cin>>n>>m;
        vector<int> v(n),v2(m),v3;
        for(int &it:v) cin>>it;
        for(int &it:v2) cin>>it;
        for(int &it:v)
        {
            if(count(v2.begin(),v2.end(),it))
            {
                c++;
                v3.push_back(it);
            }
        }
        
        
            if(c==0)
        {
            cout<<endl<<"NO";
        }
        else
        {
            // cout<<endl<<"YES"<<endl<<c<<" ";
            // if(c>1)
            // {
                cout<<endl<<"YES"<<endl<<1<<" ";
                sort(v3.begin(),v3.end());
                cout<<v3[0]<<" ";
            // }
            // else
            // {

            //     for(int &it:v3) cout<<it<<" ";
            // }
            
            
        }
    }
    return 0;
}