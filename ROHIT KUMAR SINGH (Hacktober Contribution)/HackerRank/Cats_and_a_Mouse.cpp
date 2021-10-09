#include<bits/stdc++.h>
using namespace std;

string catAndMouse(int x, int y, int z) {
    string s;
        int a=abs(x-z);
        int b= abs(y-z);
        if(a<b)
        {
            s="Cat A";
        }
        else if(a>b)
        {
            s="Cat B";
        }
        else
        {
            s="Mouse C";
        }
    return s;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        string result = catAndMouse(x, y, z);
        cout<<result<<endl;
    }
    return 0;
}