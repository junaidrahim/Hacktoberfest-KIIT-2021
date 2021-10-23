#include<iostream>
using namespace std;
void findconsecutive(int array[],int n)
{
    int diff=array[1]-array[0];
    int count=1;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(array[i+1]-array[i]==diff)
        {
            count++;
        }
        else
        {
            ans=max(ans,count);
            cout<<count<<endl;
            count=2;
            diff=array[i+1]-array[i];
        }
    }
    cout<<"ans is "<<ans<<endl;
    return;
    
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    findconsecutive(array,n);
    return 0;
    
}
