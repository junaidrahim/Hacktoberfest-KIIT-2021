#include<bits/stdc++.h>
using namespace std;


int utopianTree(int n) {
    bool check = true;
    int val=1;
    while(n--)
    {
        if(check == true)
        {
            val*=2;
            check = false;
        }
        else{
            val++;
            check = true;
        }
    }
    return val;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int result = utopianTree(n);
        cout<<result<<endl;
    }
}