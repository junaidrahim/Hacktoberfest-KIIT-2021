#include<bits/stdc++.h>
using namespace std;

void insertionSort1(int n, vector<int> arr) {
    int k=arr[n-1];
    int i=n-2;
    bool check=false;
    while(i>=-1 and check==false)
        {
            
            if(k<arr[i])
            {
                arr[i+1]=arr[i];
                i--;
            }
            else
            {
                arr[i+1]=k;
                i--;
                check=true;
            }
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
    insertionSort1(n, v);
    return 0;
}