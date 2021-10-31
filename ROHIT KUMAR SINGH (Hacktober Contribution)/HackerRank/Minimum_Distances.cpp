#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &it : a)
        cin >> it;
    map<int, int> mp;

    auto front_ele_add = find(a.begin(), a.end(), a.front());

    for (int &it : a)
    {
        mp[it] = abs(mp[it] - (find(a.begin(), a.end(), it) - front_ele_add));
    }

        for (int i = 0; i < a.size(); i++)
    {
        mp[a[i]] = abs(mp[a[i]] - (find(a.begin() + i, a.end(), a[i]) - front_ele_add));
    }

    vector<int> result;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        if (i->second != 0)
            result.push_back(i->second);
        else
        {
            result.push_back(INT_MAX);
        }
    }

    int res = *min_element(result.begin(), result.end());
    if (res == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << res;
    }
    return 0;
}
