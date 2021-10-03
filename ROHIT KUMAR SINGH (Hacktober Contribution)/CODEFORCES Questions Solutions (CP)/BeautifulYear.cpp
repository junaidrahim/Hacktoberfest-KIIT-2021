//30-05-2020
#include<iostream>
#include<set>
using namespace std;

int check(int n)
{
    int c1=0,a;
    set<int> s;
    while(n>0)
    {
        c1++;
        a=n%10;
        n=n/10;
        s.insert(a);
    }
    
    if(c1==s.size())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,a,year;
    cin>>year;
    
    for(int i=year+1;;i++)
    {
        if(check(i))
        {
            cout<<i;
            break;
        }
    }

    return 0;
}