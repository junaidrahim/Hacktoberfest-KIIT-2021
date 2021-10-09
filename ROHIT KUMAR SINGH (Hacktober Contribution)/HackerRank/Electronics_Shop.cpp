#include<bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    vector<int> result;
    int maxVal;
    for(int &it:keyboards)
    {
        for(int &i:drives)
        {
            result.push_back(it+i);
        }
    }
    sort(result.begin(),result.end());
    reverse(result.begin(),result.end());
    for(int &it:result)
    {
        if(it<=b)
        {
            return it;
        }

        else if(it==result.back())
        {
            return -1;
        }
    }
}

int main()
{
    int b,n,m;
    cin>>b>>n>>m;
    // v1:keyboard, v2:drives
    vector<int> v1(n),v2(m);
    for(int &it:v1) cin>>it;
    for(int &it:v2) cin>>it;
    int moneySpent = getMoneySpent(v1, v2, b);
    cout<<moneySpent<<endl;
    return 0;
}