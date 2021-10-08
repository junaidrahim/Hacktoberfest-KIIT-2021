#include <bits/stdc++.h>
using namespace std;

vector<string> cavityMap(vector<string> grid)
{
    vector<string> result;
    int pre, mid, nxt;

    for (string &s : grid)
    {
        for (int i = 1; i < s.length() - 1; i++)
        {
            pre = int(s[i - 1]);
            mid = int(s[i]);
            nxt = int(s[i + 1]);
            if (mid > pre and mid > nxt)
            {
                s[i] = 'X';
            }
        }
        result.push_back(s);
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (string &it : v)
        cin >> it;
    vector<string> result = cavityMap(v);
    for(string &it:result) cout<<it<<endl;
    return 0;
}