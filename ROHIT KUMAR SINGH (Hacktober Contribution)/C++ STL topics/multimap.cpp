//This is to implement the multimap

/*1. Multimap is just like map ,bt the only idfference is that we can assign multiple value to a 
single key which is not possible in map.

2. it always gives the output in the ordered way.

3. mp[1] = 10;  => This methd of assigning keys and value is not possible in multimap.*/

#include<iostream>
#include<map>

using namespace std;

int main()
{
    multimap<int,int>mp;
    mp.insert(make_pair(1,10));
    mp.insert(make_pair(2,300));
    mp.insert(make_pair(2,30));         //multiple value allocation to a single key
    mp.insert(make_pair(4,300));
    cout<<"Current size is= "<<mp.size()<<endl;
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {
        cout<<itr->first<<"--"<<itr->second<<endl;
    }

    return 0;
}
