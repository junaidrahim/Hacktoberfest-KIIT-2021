#include<bits/stdc++.h>
using namespace std;

void insertionSort2(int n, vector<int> arr) {

    for(int i=1; i<n; i++)
    {
        int val = arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;

        for(int &it:arr) cout<<it<<" ";
        cout<<endl;
    }

}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    insertionSort2(n, v);
    return 0;
}