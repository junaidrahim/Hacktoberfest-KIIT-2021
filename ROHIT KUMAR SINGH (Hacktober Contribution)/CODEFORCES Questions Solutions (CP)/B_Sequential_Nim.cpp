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
    {   int c=0;
        int x;
        cin>>x;
        vector<int> v(x);
        for(int &it:v) cin>>it;
        int cal=0;
        for(int &it:v)
        {
            {
                if(it==1)
                {
                    c++;   
                }
                else if(it>1 and it!=v.back())
                {
                    c+=2;
                }
            }
        }
        if(cal==0)
        {
            cout<<"Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
        
    }
    return 0;
}