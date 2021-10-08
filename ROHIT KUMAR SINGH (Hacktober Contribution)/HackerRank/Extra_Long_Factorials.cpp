//incomplete: long factorial question
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    unsigned long long int f = fact(n);
    cout<<f;
    return 0;
}