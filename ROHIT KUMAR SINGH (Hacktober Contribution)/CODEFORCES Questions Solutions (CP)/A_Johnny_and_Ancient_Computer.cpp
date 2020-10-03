#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

LL rem(LL x)
{
    while (x%2==0)
    {
        x/=2;
    }
    return x;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        LL x,y,c=0;
        cin>>x>>y;
        if(x>y)     swap(x,y);

        if(rem(x)!=rem(y))
        {
            cout<<"-1"<<endl;
            
        }
        else
        {
            y/=x;
            while (y>=8)
            {
                y/=8;
                c++;
            }
            if(y>1) c++;

            cout<<c<<endl;
            }
        
        //ANOTHER LOGIC:BUT TIME EXCEEDED
        // if(x>y) z=x%y;
        // else z=y%x;

        // if(x==1 and y==1)
        // {
        //     cout<<1<<endl;
        // }
        // else if((x%2!=0 and y==1)or(y%2!=0 and x==1))
        // {
        //     cout<<-1<<endl;
        // }
        // else if(z==0)
        // {
        //     ll minVal = min(x,y);
        //     ll maxVal = max(x,y);
        //     while(maxVal!=minVal)
        //     {
        //         if(maxVal>=8 and maxVal%8==0)
        //         {
        //             maxVal/=8;
        //             c++;
        //         }
        //         else if(maxVal>=4 and maxVal%4==0)
        //         {
        //             maxVal/=4;
        //             c++;
        //         }
        //         else if(maxVal>=2 and maxVal%2==0)
        //         {
        //             maxVal/=2;
        //             c++;
        //         }
        //     }
        //     cout<<c<<endl;
        // }
        
        // else
        // {
        //     cout<<-1<<endl;
        // }
    }  
    return 0;
}