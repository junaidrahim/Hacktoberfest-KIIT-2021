#include<iostream>
#include<vector>

using namespace std;

template<typename type>
struct MyAlloc: allocator<type>
{
    type *allocate(size_t size)
    {
        cout<<"Allocated size="<<size<<endl;
        return new type[size];
    }

    void deallocator(type *ptr,size_t size)
    {
        cout<<"Deallocated size="<<size<<endl;
        delete[] ptr;
    }
};

int main()
{
   vector<int,MyAlloc<int>> v;
    v.push_back(110);
    v.push_back(120);
    v.push_back(130);

    for(auto &val:v)
    {
        cout<<val<<endl;
    }   
    return 0; 
} 
