#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
    string s;
    int check=0;
    cin>>s;
    vector<char> v;
    for(int i=0; i<s.length(); i++)
        {
                if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
                {
                    i+=2;
                    check=1;
                }
                else
                {
                    if(check==1)
                    {
                        check=0;
                        v.push_back(' ');
                    }
                    v.push_back(s[i]);

                }
                
        }
    for(char &it:v) cout<<it;
    return 0;
}