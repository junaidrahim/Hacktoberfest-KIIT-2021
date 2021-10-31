//This is to implement the unordered multimap

/*1. Unordered multimap is just like unordered map ,but the only difference is that we can assign multiple value to a 
single key which is not possible in unordered map.

2.It does not gives the output in ordered way.

3. mp[1] = 10;  => This methd of assigning keys and value is not possible in unordered multimap.*/

#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_multimap<int,string> ump;
    ump.insert(make_pair(3,"Three"));
    ump.insert(make_pair(4,"Four"));
    ump.insert(make_pair(1,"One"));
    ump.insert(make_pair(2,"Two"));
    ump.insert(make_pair(3,"NewThree"));
    ump.insert(make_pair(4,"NewFour"));
    for(auto itr  = ump.begin();itr!=ump.end();itr++)
    {
        cout<<itr->first<<"=>"<<itr->second<<endl;
    }
    return 0;
}