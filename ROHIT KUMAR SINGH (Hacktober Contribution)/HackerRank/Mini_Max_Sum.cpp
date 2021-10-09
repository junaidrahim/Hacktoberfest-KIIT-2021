#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    // int n,min,max;
    // cin>>n;
    // vector<int> v(n);
    // for(int &it:v) cin>>it;
    // cout<<accumulate(v.begin(),v.begin()+4,0)<<" "<<accumulate(v.begin()+(n-4),v.end(),0);

    //METHOD TO PASSS THE TESTS GIVEN
    long int min=0,max=0;
    vector<int> v(5);
    for(int &it:v) cin>>it;
    sort(v.begin(),v.end());
    // cout<<accumulate(v.begin(),v.begin()+4,0)<<" "<<accumulate(v.begin()+(5-4),v.end(),0);
    for(auto it=v.begin();it<v.begin()+4;it++)
    {
        min+= *it;
    }
    for(auto it=v.begin()+1;it!=v.end();it++)
    {
        max+= *it;
    }
    cout<<min<<" "<<max;
    return 0;
}