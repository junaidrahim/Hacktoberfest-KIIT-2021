#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float l,r,m,a,b,c,rem,n;
        cin>>l>>r>>m;
        a=l;
        if(m/l<1)
        {
            n = ceil(m/l);
        }
        else
        {
            n = floor(m/l);
        }
        rem = m-(a*n);
        vector<float> v;
        for(float i=l; i<=r; i++)
            {
                if(rem<0)
                {
                    if(count(v.begin(),v.end(),rem+i))
                    {
                        cout<<a<<" "<<rem+i<<" "<<i<<endl;
                    }
                    else
                    {
                        v.push_back(i);
                    }
                }
                else
                {
                    if(count(v.begin(),v.end(),i-rem))
                    {
                        cout<<a<<" "<<i<<" "<<i-rem<<" "<<endl;
                    }
                    else
                    {
                        v.push_back(i);
                    }
                }
                
                
            }

    }
    return 0;
}