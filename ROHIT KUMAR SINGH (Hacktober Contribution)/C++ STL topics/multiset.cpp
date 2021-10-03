//Implementation of set

/* 1. Multiple duplicate values cannot be stored in "SET" but it is possible in "MULTISET" */

#include<iostream>
#include<set>

using namespace std;

int main()
{
    multiset<int> my_set;
    my_set.insert(10);
    my_set.insert(10);
    my_set.insert(20);
    my_set.insert(30);
    my_set.insert(40);
    my_set.insert(50);  
    my_set.insert(10);
    cout<<"\nTHE MULTISET VALUES ARE :"<<endl;
    for(auto &myval:my_set)
    {
        cout<<myval<<endl;
    }
    return 0;
}
