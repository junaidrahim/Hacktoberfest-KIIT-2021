//Implementation of comparator

#include<iostream>
#include<set>

using namespace std;

//This can also be used as userdefiner comparator
    template <typename type> 
    struct mycomp
    {
        bool operator()(const type & first,const type & second)
        const{
            return first<second;
            //first<second=> Descending order

            //return first>second;
            //first<second=> Ascending order
        }
    };

    //This can also be used as userdefiner comparator using pair<> 
    //.second means compared to second and .first means compared to first 
    template <typename type> 
    struct mycomp_pair
    {
        bool operator()(const type & first,const type & second)
        const{
            return first.second<second.second;
            //first<second=> Descending order

            //return first.first>second.first;
            //first<second=> Ascending order
        }
    };

int main()
{
    set<int,greater<int>> my_set;
    my_set.insert(10);
    my_set.insert(20);
    my_set.insert(30);
    my_set.insert(40);
    my_set.insert(50);

    for(auto &myval:my_set)
    {
        cout<<myval<<endl;
    }


    
    cout<<"\n using user defined comparator:"<<endl;
    set<int,mycomp<int>> my_new_set;
    my_new_set.insert(10);
    my_new_set.insert(20);
    my_new_set.insert(30);
    my_new_set.insert(40);
    my_new_set.insert(50);

    for(auto &myval:my_new_set)
    {
        cout<<myval<<endl;
    }



    cout<<"\n using pairs in comparator:"<<endl;
    set<pair<int,int>,greater<pair<int,int>>> my_set2;
    my_set2.insert({10,100});
    my_set2.insert({20,200});
    my_set2.insert({30,300});
    my_set2.insert({40,400});
    my_set2.insert({50,500});

    for(auto &myval:my_set2)
    {
        cout<<myval.first<<"--"<<myval.second<<endl;
    }



    cout<<"\n using user defined comparator:"<<endl;
    set<pair<int,int>,mycomp_pair<pair<int,int>>> my_set3;
    my_set3.insert({10,100});
    my_set3.insert({20,200});
    my_set3.insert({30,300});
    my_set3.insert({40,400});
    my_set3.insert({50,500});

    for(auto &myval:my_set3)
    {
        cout<<myval.first<<"--"<<myval.second<<endl;
    }

    return 0;
}