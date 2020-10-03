//This is to implement the use of map

//1. it always gives the output in the ordered way.

#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,int>mp;
    mp[1] = 10;
    mp.insert(make_pair(3,30));
    mp[2] = 20;
    cout<<"Current size is= "<<mp.size()<<endl;
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<"--"<<itr->second<<endl;
    }

    return 0;
}