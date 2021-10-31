//23-06-2020
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<double> v;
    for(int i=0;i<n;i++)
    {
        float x; 
        cin>>x;
        double val1 = x/100;
        v.push_back(val1);
    }
    double val = (accumulate(v.begin(),v.end(),0.0));
    cout<<(val*100)/n;
    
    return 0;
}