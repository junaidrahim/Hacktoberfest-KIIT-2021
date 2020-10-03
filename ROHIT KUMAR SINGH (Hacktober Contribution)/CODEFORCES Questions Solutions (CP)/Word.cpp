//29-05-2020
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=0,u=0;
    for(char c:s)
    {
        if(islower(c))
        {
            l++;
        }
        else
        {
            u++;
        }
    }

    if(l>u ||l==u)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
    
    return 0;
}