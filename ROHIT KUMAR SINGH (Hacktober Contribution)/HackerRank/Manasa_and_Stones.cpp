#include <bits/stdc++.h>
using namespace std;

vector<int> stones(int n, int a, int b)
{
    vector<int> result;
    set<int> s;
    int v = n - 1;
    for (int i = 0; i < n; i++)
    {
        int val = (a * (v - i)) + (b * i);
        s.insert(val);
    }
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        result.push_back(*itr);
    }
    return result;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> result = stones(n, a, b);
        for (int &it : result)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}