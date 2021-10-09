#include<iostream>
using namespace std;
int main()
{
    int year;
    string ans;
    cin>>year;
    if(year == 1918)
    {
        ans= "26.09.1918";
    }
    else if(( (year<=1917) && (year%4==0) ) or ( (year>1918) && ( (year%400==0) or (year%4==0 && year%100!=0) ) ))
    {
        ans = "12.09."+to_string(year);
    }
    else
    {
        ans = "13.09."+to_string(year);
    }
    cout<<ans;
    return 0;
}