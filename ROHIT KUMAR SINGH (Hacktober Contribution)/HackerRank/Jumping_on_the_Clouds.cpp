#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c)
{
    int jump = 0;
    if (c.size() < 3)
    {
        jump = 2;
    }
    else
    {
        for (auto i = c.begin(); i < c.end(); i++)
        {
            if (*(i + 2) == 0)
            {
                jump++;
                i++;
            }
            else
            {
                jump++;
            }
        }
    }
    return jump - 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &it : v)
        cin >> it;
    int result = jumpingOnClouds(v);
    cout << result << endl;
    return 0;
}