//28-05-2020
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    int result =s1.compare(s2);
    if(result==0)
    {
        cout<<result<<endl;
    }
    else if(result>0)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    return 0;
}