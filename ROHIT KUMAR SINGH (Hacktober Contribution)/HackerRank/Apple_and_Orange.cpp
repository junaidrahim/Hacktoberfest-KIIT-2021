#include<iostream>
#include<vector>
using namespace std;

void countfruit(int s,int t, int a,int b,vector<int> apples,vector<int>oranges)
{
    int m=apples.size(),n=oranges.size();
    int ac=0,oc=0;
    for(int i=0;i<m;i++)
    {
        apples[i]=apples[i]+a;
        if(apples[i]>=s and apples[i]<=t) ac++;
    }
    for(int i=0;i<n;i++)
    {
        oranges[i]=oranges[i]+b;
        if(oranges[i]>=s and oranges[i]<=t) oc++;
    }

    cout<<ac<<endl<<oc;
}

int main()
    {
        int s,t,a,b,m,n;
        cin>>s>>t;
        cin>>a>>b;
        cin>>m>>n;
        vector<int> apples(m), oranges(n);
        for(int &it:apples) cin>>it;
        for(int &it:oranges) cin>>it;
        countfruit(s,t,a,b,apples,oranges);
        return 0;
    }