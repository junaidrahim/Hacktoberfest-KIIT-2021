#include<bits/stdc++.h>
using namespace std;

int findDigits(int n) {
    int c=0;
    int no = n;
    while(n!=0)
    {
        int a = n%10;
        if(a==0)
        {
        }
        else if(no%a==0)
        {
            c++;
        }
        n=n/10;
    }
    return c;

}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int result = findDigits(n);
        cout<<result<<endl;
    }
}