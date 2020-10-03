//25-05-2020
#include<iostream>
using namespace std;
int main()
{   int n;
    string st;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>st;
        if(st=="++X"||st=="X++")
        {
            count++;
        }
        else if(st=="--X"||st=="X--")
        {
            count--;
        }
    }
    cout<<count<<endl;

    return 0;
}