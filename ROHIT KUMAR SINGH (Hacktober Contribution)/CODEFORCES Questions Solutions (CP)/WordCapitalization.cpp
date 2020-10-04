//26-05-2020
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<char(toupper(s[0]))<<s.substr(1,s.length()-1)<<endl;
    
    return 0;
}