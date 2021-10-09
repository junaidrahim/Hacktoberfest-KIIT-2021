#include<bits/stdc++.h>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    vector<int> result(2);
    int min=scores[0],max=scores[0],minCount=0,maxCount=0;
    for(int &it:scores)
    {
        if(it<min)
        {
            min=it;
            minCount++;
        }
        else if(it>max)
        {
            max = it;
            maxCount++;
        }
    }
    result[1]=maxCount;
    result[2]=minCount;
    return result;

}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    vector<int> result = breakingRecords(v);
    cout<<result[1]<<" "<<result[2];
    return 0;
}