#include<bits/stdc++.h>
using namespace std;
int r = 0;

int bianrySearch(vector<int> v, int ele,int beg,int end)
{
    r++;
    int mid;
    mid = (beg + end )/2;
    if(ele == v[mid])
    {
        return r;
    }
    else if(ele < v[mid]){       //left side
        end = mid;
        bianrySearch(v,ele,beg,end);
    }
    else{                   //right side
        beg = mid;
        bianrySearch(v,ele,beg,end);
    }
   
}
int main(){
    int n,ele;
    cin>>n;
    vector<int> v(n);
    for(int &it:v) cin>>it;
    cout<<"\nEnter the searching element: ";
    cin>>ele;
    int r = bianrySearch(v,ele,0,v.size()-1);
    cout<<"found in "<<r<<" searches."<<endl;
}