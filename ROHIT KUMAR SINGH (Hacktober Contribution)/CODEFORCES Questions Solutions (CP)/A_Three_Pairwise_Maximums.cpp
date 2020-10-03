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
        vector<int> v;
        for(int i=0;i<3;i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
        sort(v.begin(),v.end());
        if(v[1]!=v[2])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl<<v[0]<<" "<<v[0]<<" "<<v[2]<<endl;
        }
        
    }
    return 0;
}
