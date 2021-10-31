#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
#include<set>
#include<cmath>
#include<sstream>
#define LL long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        string s = to_string(n);

        if(s.length()>=2)
        {
            int lv = min(s.back(),s[s.length()-2]);
            s.pop_back();
            s.pop_back();
            s.push_back(lv);
            stringstream val(s); 
    
            int x = 0; 
            val >> x; 
    
            cout<<x<<endl;
            }
        else
        {
            cout<<n<<endl;
        } 
    }
    return 0;
}