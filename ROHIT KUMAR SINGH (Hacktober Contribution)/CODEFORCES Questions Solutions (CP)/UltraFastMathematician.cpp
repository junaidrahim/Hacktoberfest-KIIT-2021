//12-06-2020-june
#include<iostream>
using namespace std;
int main()
{
    string s1,s2,fstr;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
        {
            fstr.append("0");
        }
        else
        {
            fstr.append("1");
        }
    }
    cout<<fstr<<endl;

    return 0;
}