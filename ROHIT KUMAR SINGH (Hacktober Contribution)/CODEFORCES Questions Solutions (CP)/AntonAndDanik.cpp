//29-05-2020
#include<iostream>
using namespace std;
int main()
{
    int n,d=0,a=0;
    char val;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        if(val=='D')
        {
            d++;
        }
        else if(val=='A')
        {
            a++;
        }
    }
    if(d>a)
    {
        cout<<"Danik"<<endl;
    }
    else if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    
    return 0;
}