#include<bits/stdc++.h>
using namespace std;

int findMedian(vector<int> arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()/2];    

}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    int result = findMedian(v);
    cout<<result;
    return 0;
}