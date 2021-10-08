#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b) 
{
    int sum1 = ((accumulate(bill.begin(),bill.end(),0))-bill[k])/2;
    if(sum1==b)
    {
        cout<<"Bon Appetit";
    }else{
        cout<<b-sum1;
    }
}

int main()
{
    int n, k , b;
    cin>>n>>k;
    vector<int> bill(n);
    for(int &it:bill) cin>>it;
    cin>>b;
    bonAppetit(bill, k, b);
    return 0;
}