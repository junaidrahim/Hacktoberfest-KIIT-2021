#include<bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    return (((s-1)+(m-1))%n)+1;
}

int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
        int n,m,s;
    
    int result = saveThePrisoner(n, m, s);
    cout<<result<<endl;
   }
    return 0;
}