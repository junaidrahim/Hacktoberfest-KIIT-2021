//13-07-2020
#include<iostream>
#include<algorithm>
using namespace std;
int isComp(int val)
{
    bool c = false;
    for(int i=2;i<val;i++)
    {
        if(val%i==0)
        {
            c = true;
            break;
        }
    }
    if(c==true)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       if(isComp(i) and isComp(n-i))
       {
           cout<<i<<" "<<n-i<<endl;
           break;
       }
    }
    return 0;
}
