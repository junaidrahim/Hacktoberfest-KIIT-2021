//30-06-2020---> IMCOMPLETE CODE
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }

    int max = *max_element(v.begin(),v.end());
    int min = *min_element(v.begin(),v.end());

    int count = 0;
    
    ptrdiff_t indmax = find(v.begin(),v.end(),max)- v.begin()+1;
    ptrdiff_t indmin = (find(v.begin(),v.end(),min)- v.begin())+1;
    
    if(v.front()==min)
    {
        count++;
    }
    if(v.back()==max)
    {
        count++;
    }

    // //Calculation
    int x = n - indmin;
    int y = indmax - 1;
    cout<<(x+y)-count<<endl;

    return 0;
}
