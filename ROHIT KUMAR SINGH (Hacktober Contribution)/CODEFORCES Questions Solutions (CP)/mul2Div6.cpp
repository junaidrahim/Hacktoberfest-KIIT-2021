#include<iostream>
using namespace std;
int main()
{
    int n0;
    cin>>n0;
    
    for(int i=0; i<n0; i++)
    {
        int n;
        cin>>n;
        int ct2=0,ct3=0;
        while(n%2==0)
        {
            ++ct2;
            n/=2;
        }
        while(n%3==0)
        {
            ++ct3;
            n/=3;
        }
        if(n==1 and ct2<=ct3)
        {
            cout<<(ct3-ct2)+ct3<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}