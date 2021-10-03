//INCOMPLETE

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
        LL a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        while(n--)
        {
            LL n1 = (a-1) * b;
            LL n2 = (b-1) * a;
            if(a>x and n1<n2)
            {
                cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
                a--;
            }
            else if(n2<n1 and b>y)
            {
                cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
                b--;
            }
            else if(b>y and n1<n2)
            {
                cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
                b--;
            }
            else if(n2<n1 and a>x)
            {
                cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;
                a--;
            }
            else{
                if((a-x)>(b-y))
                {
                    a--;
                }
                else
                {
                    b--;
                }
                
            }

        }
        cout<<a*b<<endl;
    }
    return 0;
}