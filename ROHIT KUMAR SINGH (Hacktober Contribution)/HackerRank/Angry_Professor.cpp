#include<bits/stdc++.h>
using namespace std;

string angryProfessor(int k, vector<int> a) {
    int c=0;
    for(int &it:a)
    {
        if(it<=0)
        {
            c++;
        }
    }
    if(c>=k)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

int main()
{
    int tc;
    cin>>tc;
    while (tc--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int &it:v) cin>>it;
        string result = angryProfessor(k, v);
        cout<<result<<endl;
    }
    
}