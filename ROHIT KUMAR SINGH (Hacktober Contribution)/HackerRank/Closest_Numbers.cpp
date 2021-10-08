#include<bits/stdc++.h>
using namespace std;

vector<int> closestNumbers(vector<int> arr) {
    vector<int> result;
    sort(arr.begin(),arr.end());
    int min = INT_MAX;
    for(auto it= arr.begin();it<arr.end()-1;it++)
    {
        int diff = abs(*it - *(it+1));
        if(diff<min)
        {
            min=diff;
            result.clear();
            result.push_back(*it);
            result.push_back(*(it+1));
        }
        else if(diff == min)
        {
            result.push_back(*it);
            result.push_back(*(it+1));
        }
    }
    return result;

}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    vector<int> result = closestNumbers(v);
    for(int &it:result) cout<<it<<" ";
    return 0;
}