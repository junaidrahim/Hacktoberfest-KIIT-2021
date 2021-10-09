#include<bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
    int val=5;
    int count=0;
    //add the divide ans to the count and returnin final
    while(n--)
    {
        val= floor(val/2);
        count+=val;
        val*=3;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int result = viralAdvertising(n); 
    cout<<result<<endl;
    return 0;
}