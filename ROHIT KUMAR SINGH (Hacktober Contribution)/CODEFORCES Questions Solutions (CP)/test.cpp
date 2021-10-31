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
    string s = "12.54";
    stringstream v(s);

    float x;
    v>>x;
    cout<<x<<endl;
    return 0;
}