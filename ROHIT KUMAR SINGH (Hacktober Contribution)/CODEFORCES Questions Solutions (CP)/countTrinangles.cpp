#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D;
    int count=1;
    cin>>A>>B>>C>>D;
    if(A<=B && B<=C && C<=D)
    {
        if(A!=B)
        {
            count++;
        }
        if(B!=C)
        {
            count++;
        }
        if(C!=D)
        {
            count++;
        }

    }
    cout<<count<<endl;
    
    return 0;
}