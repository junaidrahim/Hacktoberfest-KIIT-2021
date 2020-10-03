#include<iostream>
#include<set>
#include<string.h>
using namespace std;
int main()
{
    char s[1000];
    set<char> st;
    cin.getline(s,1000);
    int len = strlen(s);
    for (int i=0;i<len;i++)
    {
        if(s[i]=='}' or s[i]=='{' or s[i]==',' or s[i]==' ')
        {
            continue;
        }
        else
        {
            st.insert(s[i]);
        }
        
    }

    cout<<st.size()<<endl;
    return 0;
}
