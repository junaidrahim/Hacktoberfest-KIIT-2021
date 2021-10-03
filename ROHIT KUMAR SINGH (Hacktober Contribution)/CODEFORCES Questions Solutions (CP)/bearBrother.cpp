//CODEFORCES:Challenge 3

#include<iostream>
using namespace std;

int main()
{
    int likman,bob,count=0;
    cin>>likman>>bob;
    while(likman<=bob)
    {
        likman*=3;
        bob*=2;
        count++;
    }
    cout<<count<<endl;
    return 0;
}