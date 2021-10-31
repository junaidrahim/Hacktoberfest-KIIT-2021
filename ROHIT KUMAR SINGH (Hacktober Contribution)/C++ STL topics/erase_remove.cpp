//Implementation of erase and remove
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);

    cout<<"\n****ORIGINAL RESULT****"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"value=> "<<v[i]<<endl;
    }

    v.erase(v.begin()+2);     //erase the third element
    
    cout<<"\n****RESULT AFTER ERASING****"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"value=> "<<v[i]<<endl;
    }

    v.erase(v.begin()+1,v.begin()+2);       //erase the elements using range
    v.erase(v.begin()+2);     //erase the third element
    
    cout<<"\n****RESULT AFTER ERASING 2****"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"value=> "<<v[i]<<endl;
    }

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(30);
    v.push_back(40);

    cout<<"\n****RESULT AFTER INPUT NEW VALUES****"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"value=> "<<v[i]<<endl;
    }

    v.erase(std::remove(v.begin(),v.end(),30));          //Use of remove
    cout<<"\n****RESULT AFTER REMOVING****"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<"value=> "<<v[i]<<endl;
    }
}