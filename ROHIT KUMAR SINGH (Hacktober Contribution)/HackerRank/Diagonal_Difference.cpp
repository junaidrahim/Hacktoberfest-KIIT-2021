#include<bits/stdc++.h>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n=arr.size();
    int diag1=0,diag2=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                diag1+=arr[i][j];
            }
            if(j==(n-1)-i)
            {
                diag2+=arr[i][j];
            }
        }
    }
    return abs(diag1-diag2);

}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        vector<int> temp(n);
        for(int &it:temp) cin>>it;

        v.push_back(temp);

    }
    int result = diagonalDifference(v);
    cout<<result;
    return 0;
}