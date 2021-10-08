#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> result;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    for(int &it:v)
    {
        if(it<38) result.push_back(it);
        else
        {
            int val= ceil(float(it)/5);
            if(((val*5)-it)<3) result.push_back(val*5);
            else result.push_back(it);
        }
    }
    for(int &it:result) cout<<it<<endl;
    return 0;
}