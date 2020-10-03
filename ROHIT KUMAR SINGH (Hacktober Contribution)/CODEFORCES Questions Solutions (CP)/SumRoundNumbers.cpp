#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       int x,l=1;
       cin>>x;
       vector<int> v;
        while(x>0)
        {
            d = x%10;
            x /= 10;
            if(d==0)
            {
                l *= 10;
                continue;
            } 
            else
            {
                v.push_back(d*l);
            }
            l *= 10;
        }
        cout<<v.size()<<endl;
        for(auto itr=v.begin();itr<v.end();itr++)
        {
            cout<<*itr<<" ";
        }
        cout<<endl;
    }
    return 0;
}