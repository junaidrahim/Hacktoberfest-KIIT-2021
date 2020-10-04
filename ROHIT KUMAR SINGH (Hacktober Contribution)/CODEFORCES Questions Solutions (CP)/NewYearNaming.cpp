#include<iostream>
using namespace std;
int n,m,no,i,val;
void funct(int no, string ans[i])
{int val1,val2;
    val1=no%n;
    val2=no%m;

}
int main()
{
    
    cin>>n>>m;
    string name1[n],name2[m];
    for(int i=0;i<n;i++)
    {
        cin>>name1[i];
    }
        for(i=0;i<n;i++)
    {
        cin>>name2[i];
    }
    cin>>no;
    string ans[no];
    for(i=0;i<no;i++)
    {
        cin>>val;
        funct(val,ans[i]);

    }
    return 0;
}