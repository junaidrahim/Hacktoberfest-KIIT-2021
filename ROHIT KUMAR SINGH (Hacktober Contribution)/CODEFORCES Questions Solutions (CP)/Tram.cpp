//28-05-2020
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,val1,val2=0,passengers=0;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>val1>>val2;
        passengers-=val1;
        passengers+=val2;
        v.push_back(passengers);
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    return 0;
}