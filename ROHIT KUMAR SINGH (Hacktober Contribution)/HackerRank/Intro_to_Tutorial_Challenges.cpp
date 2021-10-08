#include<bits/stdc++.h>
using namespace std;

int introTutorial(int V, vector<int> arr) {
    int ind = (find(arr.begin(), arr.end(), V) - arr.begin());
    return ind;
}

int main()
{
    int V,n;
    cin>>V;
    cin>>n;
    vector<int> arr(n);
    for(int &it:arr) cin>>it;
    int result = introTutorial(V, arr);
    cout<<result<<endl;
    return 0;
}