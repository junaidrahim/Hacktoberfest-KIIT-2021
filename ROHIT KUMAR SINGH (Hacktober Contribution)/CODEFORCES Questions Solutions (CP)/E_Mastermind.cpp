// 
// NOTCOMPLETED:CODEFORCES CONTEST PROBLEM
// 

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
    int n;
    cin>>n;
    while(n--)
    {
        int l,x,y;
        cin>>l>>x>>y;
        vector<int> v(l),v2(l);
        for(int &it:v) cin>>it;
        int z=y-x;
        
        if(y==l and x!=y)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int &it:v)
            {
                if(x>0)
                {
                    v2.push_back(it);
                    x--;
                }
                else
                {
                    if(z>0)
                    {
                        v2.push_back(rand());
                        v2.push_back(it);
                        z--;
                    }
                    else
                    {
                        v2.push_back(rand());
                    }
                    

                }
            
            }
        }
        

    }
    return 0;
}