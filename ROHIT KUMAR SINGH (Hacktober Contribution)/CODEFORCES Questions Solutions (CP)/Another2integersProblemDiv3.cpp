//Alternate short method
#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        int diff = abs(a-b);
        if(diff%10==0)cout<<diff/10<<endl;
        else cout<<(diff/10)+1<<endl;
    }
    return 0;
}