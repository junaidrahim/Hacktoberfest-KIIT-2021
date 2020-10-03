#include<iostream>
//Contigious memory allocation
#include<vector>
//Doubly link list
#include<list>

using namespace std;

int main()
{

    cout<<"*****VECTOR SECTION*****"<<endl;
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    //To print the size of the vector
    cout<<"\nthe current size of the vector v is="<<v.size()<<endl;

    //to pritn the values or to access the value int the vector
    //It is just like pointers
    
//    vector<int>::iterator itr = v.begin();

    //Anothe methos is using auto
    auto itr = v.begin();
    for(;itr!=v.end();itr++)
    {
        cout<<"Value is="<<*itr<<endl;
    }

    //To clear the vector
    v.clear();
    cout<<"Now the size is="<<v.size()<<endl<<endl;


    cout<<"*****LIST SECTION*****"<<endl;
    //All these things can also be done using list  
    list<int> l;
    l.push_back(100);
    l.push_back(200);
    l.push_back(300);
    l.push_back(400);

    cout<<"\nThe current size of the list is="<<l.size()<<endl;
    auto litr = l.begin();
    for (;litr!=l.end();litr++)
    {
        cout<<"list value="<<*litr<<endl;
    }

    l.clear();
    cout<<"Now the size is="<<l.size()<<endl;
    return 0;
}


