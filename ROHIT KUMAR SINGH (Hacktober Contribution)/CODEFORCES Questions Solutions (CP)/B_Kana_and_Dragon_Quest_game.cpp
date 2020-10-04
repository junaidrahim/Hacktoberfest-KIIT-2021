#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,n,m,ans=0;
        cin>>x>>n>>m;
        while(n+m)
        {
            if(n==0)
            {
                x=x-10;
                m--;
                cout<<"oe"<<x<<" "<<n<<" "<<m<<endl;
            }
            else if(m==0)
            {
                x=(x/2)+10;
                n--;
                cout<<"ne"<<x<<" "<<n<<" "<<m<<endl;
            }
            else
            {
                if((x/2)+10 < x-10)
                {
                    x=(x/2)+10;
                    n--;
                    cout<<"one"<<x<<" "<<n<<" "<<m<<endl;
                }
                else
                {
                    x=x-10;
                    m--;
                    cout<<"two"<<x<<" "<<n<<" "<<m<<endl;
                }
            } 
            if(x<=0)
            {
                ans=1;
                break;
            }
        }

        if(ans==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}