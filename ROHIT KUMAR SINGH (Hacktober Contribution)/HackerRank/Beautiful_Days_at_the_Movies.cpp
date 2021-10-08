#include<bits/stdc++.h>
using namespace std;

int reverse(int a)
{
    int ans=0,d;
    while(a>0)
    {
        d=a%10;
        a=a/10;
        ans = (ans*10)+d;
    }
    return ans;
}

int beautifulDays(int i, int j, int k) {
    int c=0;
    for(int it=i;it<=j;it++)
    {
        int rev = reverse(it);
        int absVal = abs(rev-it);
        if(absVal%k==0)
        {
            c++;
        }
    }
    return c;

}

int main()
{
    int i,j,k;
    cin>>i>>j>>k;
    int result = beautifulDays(i, j, k);
    cout<<result<<endl;

}