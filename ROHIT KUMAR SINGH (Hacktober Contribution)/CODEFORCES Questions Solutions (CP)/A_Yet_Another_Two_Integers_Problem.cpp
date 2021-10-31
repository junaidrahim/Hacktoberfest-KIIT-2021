//This is the sol if we will be given any set of numbers instead od a series of 1-10
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<numeric>
#define LL long long
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {       
        int i=9,c=0;
        int a,b;
        cin>>a>>b;
        int diff = abs(a-b);
        if(diff!=0)
        {
            int no[] = {1,2,3,4,5,6,7,8,9,10};
            while(diff>0)
            {
                int val = diff/no[i];
                diff = diff%no[i];
                c+=val;
                i--;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}