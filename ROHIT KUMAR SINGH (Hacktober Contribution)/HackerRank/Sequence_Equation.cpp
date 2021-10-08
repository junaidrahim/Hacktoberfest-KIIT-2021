#include <bits/stdc++.h>
using namespace std;

int getIndex(int k, vector<int> v)
{
    auto i = find(v.begin(), v.end(), k);
    if (i != v.end())
    {
        int index = i - v.begin();
        return index + 1;
    }
    else return -1;
    
}

vector<int> permutationEquation(vector<int> p)
{
    vector<int> result;
    map<int, int> mp;
    for (int &it : p)
    {
        int ind = getIndex(getIndex(it, p), p);
        mp[it] = ind;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        result.push_back(i->second);
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &it : v)
        cin >> it;
    vector<int> result = permutationEquation(v);
    for (int &it : result)
        cout << it << endl;
}