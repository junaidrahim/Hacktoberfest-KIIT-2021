//CODEFORCES:Challenge 5

#include<iostream>
#include<map>
using namespace std;

int main()
{
   map<string,int> mp;
   int n,count=0;
   string str[200000];
   mp.insert(make_pair("Tetrahedron",4)); 
   mp.insert(make_pair("Cube",6));
   mp.insert(make_pair("Octahedron",8));
   mp.insert(make_pair("Dodecahedron",12));
   mp.insert(make_pair("Icosahedron",20));
   cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
   for(auto itr=mp.begin();itr!=mp.end();itr++)
   {
       for(int i=0;i<n;i++)
    {
        if(str[i]==itr->first)
        {
            count+=itr->second;
        }
    }
   }
   cout<<count<<endl;
   return 0;
}