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
    bool t=false;
    cin>>s;
    vector<char> v{'H','Q','9'};
    for(char c:s) if(count(v.begin(),v.end(),c)) t=true ;
    if(t==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}