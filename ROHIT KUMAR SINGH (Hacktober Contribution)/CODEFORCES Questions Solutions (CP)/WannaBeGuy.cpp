//23-06-2020
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n;
    cin>>m;
    set<int> mySet;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        mySet.insert(x);
    }

    cin>>k;
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        mySet.insert(x);
    }

    if(mySet.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    
    


    return 0;
}