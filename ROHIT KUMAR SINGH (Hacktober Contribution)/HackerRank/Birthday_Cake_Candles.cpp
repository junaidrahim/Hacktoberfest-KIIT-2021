#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    int max  = *max_element(v.begin(),v.end());
    int c=0;
    for( int &it:v)
    {
        if(it==max)c++;
    }
    cout<<c;
    return 0;
}