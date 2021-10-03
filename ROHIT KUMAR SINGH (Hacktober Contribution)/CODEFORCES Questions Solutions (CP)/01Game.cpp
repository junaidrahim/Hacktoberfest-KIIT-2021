#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       string str;
       cin>>str;
       if(min((    count(str.begin(),str.end(),'0'))    ,   (count(str.begin(),str.end(),'1')   ))  % 2 == 1)
       {
           cout<<"DA"<<endl;
       }
       else
       {
           cout<<"NET"<<endl;
       }
       
    }
    return 0;
}
