//Implementation of set

/* 1. It is just like maps.
2. Only one value(key as value) */

#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> my_set;
    my_set.insert(10);
    my_set.insert(20);
    my_set.insert(30);
    my_set.insert(40);
    my_set.insert(50);  
    my_set.insert(10);
    cout<<"\nTHE SET VALUES ARE :"<<endl;
    for(auto &myval:my_set)
    {
        cout<<myval<<endl;
    }
    return 0;
}