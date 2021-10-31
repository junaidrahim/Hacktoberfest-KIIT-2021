#include<bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector<int> height) {
    int max= *max_element(height.begin(),height.end());
    if(max-k>=0)
    {
        return (max-k);
    }else
    {
        return 0;
    }

}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    int result = hurdleRace(k,v);
    cout<<result<<endl;
}