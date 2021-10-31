#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,neg=0,pos=0,z=0;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    for(int &it:v)
    {
        if(it<0) neg++;
        else if(it>0)pos++;
        else z++;
    }
    cout<<double(pos)/n<<endl<<float(neg)/n<<endl<<float(z)/n;
    cout<<"Length:"<<v.size();
    return 0;
}