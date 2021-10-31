//This is to implement the use of unordered map

/* 1. It does not gives the output in ordered way.

2. This method is faster than the map because it is stored as "HASH TABLES". */

#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<int,string> ump;
    ump[1] = "One";
    ump[2] = "two";
    ump.insert(make_pair(3,"Three"));
    ump.insert(make_pair(4,"Four"));
    for(auto itr  = ump.begin();itr!=ump.end();itr++)
    {
        cout<<itr->first<<"=>"<<itr->second<<endl;
    }
    return 0;
}