#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
//method2
int birthday(vector<int> s, int d, int m)
{
    int count=0;
    for(auto itr=s.begin();itr!=s.end()-(m-1);itr++)
    {
        if(d== accumulate(itr,itr+m,0))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n,m,d,count=0;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    cin>>d>>m;
    cout<<birthday(v,d,m);

    // One method
    // for(int i=0; i<n; i++)
    //     {
    //         for(int j=i; j<i+m; j++)
    //             {
    //                  sum[i]+=v[j];
    //             } 
    //             if(sum[i]==d)
    //             {
    //                 count++;
    //             }
    //     }
   // cout<<count<<endl;
    return 0;
    
}
