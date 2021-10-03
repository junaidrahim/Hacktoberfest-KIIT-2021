#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int size,val;
    //Another method of input in vector
    vector<int> v;
    cout<<"Enter the size of the vector=";
    cin>>size;
    cout<<"Enter the values=";
    for(int i = 0;i<size;i++)
    {   cin>>val;
        v.push_back(val);
    }

    //the vector value are
    cout<<"\nthe vector value are="<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<v[i]<<endl;
    }

    //Now the use of <algorithm>
    sort(v.begin(),v.end());
    cout<<"\nThe values after sorting int inc. order are="<<endl;
    for(int i = 0;i<size;i++)
    {
        cout<<v[i]<<endl;
    }

    cout<<"\nThe values after sorting int dec. order are="<<endl;
    for(int i=size-1;i>=0;i--)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}