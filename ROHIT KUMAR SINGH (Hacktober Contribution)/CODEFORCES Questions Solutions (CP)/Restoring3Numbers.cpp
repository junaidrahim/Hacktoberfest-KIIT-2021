//CODEFORCES: Challenge 7

#include<iostream>
using namespace std;

int main()
{
    int x1,x2,x3,x4,temp;
    cin>>x1>>x2>>x3>>x4;
    if(x1>x2 && x1>x3 && x1>x4)
    {
        temp=x1;
        x1=x4;
        x4=temp;
    }
    else if(x2>x3 && x2>x4)
    {
        temp=x2;
        x2=x4;
        x4=temp;
    }
    else if(x3>x4)
    {
        temp=x3;
        x3=x4;
        x4=temp;
    }
    cout<<(x4-x1)<<" "<<(x4-x2)<<" "<<(x4-x3);
    return 0;
}