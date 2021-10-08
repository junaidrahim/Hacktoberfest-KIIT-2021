

// incomplete

#include<bits/stdc++.h>
using namespace std;

string appendAndDelete(string s, string t, int k) {
    int s_len = s.length(),t_len = t.length(), c=0;
    for(int i=0; i<s_len; i++)
    {
        if(s[i]==t[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }
    int a = (s_len-c)+(t_len-c);
    if(a==k)
    {
        return "Yes";
    }
    else{
        return "No";
    }
}

int main()
{
    string s,t;
    int k;
    cin>>s>>t;
    cin>>k;
    string result = appendAndDelete(s, t, k);
    cout<<result<<endl;
    return 0;
}