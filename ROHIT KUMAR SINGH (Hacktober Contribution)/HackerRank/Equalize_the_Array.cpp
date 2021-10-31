#include<bits/stdc++.h>
using namespace std;

// method 2
int equalizeArray(vector<int> arr) {
    int max=0;
    map<int,int> hash;
    for(auto i=arr.begin();i<arr.end();i++)
    {
        hash[*i]++;
    }
    for(auto i=hash.begin();i!=hash.end();i++)
    {
        if(max<i->second)
        {
            max=i->second;
        }
    }

    return arr.size()-max;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    int result = equalizeArray(v);
    cout<<result<<endl;
    return 0;
}

// Method 1
// int equalizeArray(vector<int> arr) {
//     vector<int> res;
//     int sum=0;
//     map<int,int> hash;
//     for(auto i=arr.begin();i<arr.end();i++)
//     {
//         hash[*i]++;
//     }
//     for(auto i=hash.begin();i!=hash.end();i++)
//     {
//         res.push_back(i->second);
//     }
//     sort(res.begin(),res.end());
//     for(auto i=res.begin();i<res.end()-1;i++)
//     {
//         sum+=*i;
//     }
//     return sum;
// }