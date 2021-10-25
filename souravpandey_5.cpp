#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char array[n+1];
    cin>>array;
    int j=n-1;
    bool result=1;
    for(int i=0;i<n;i++)
    {
        if (array[i]!=array[j-i])
        {
            result=0;
            cout<<"its not a pallindrome"<<endl;
            break;
        }
    }
    if(result==1)
    {
        cout<<"its a pallindrome"<<endl;
    }
    return 0;
}
