#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<int>> arr(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    priority_queue<pair<int, pair<int, int>>> maxh;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            // cout << arr[i][j] << " ";
            int x = arr[i][j];
            int y = arr[i][j + 1];
            // cout << x << " " << y;

            // maxh.push({((x * x) + (y * y)), {x, y}});
            maxh.push(make_pair(((x * x) + (y * y)), make_pair(x, y)));
            if (maxh.size() > k)
            {
                maxh.pop();
            }

            // maxh.push({x, {y, y}});
        }
        // cout << endl;
    }

    while (maxh.size() > 0)
    {
        cout << maxh.top().second.first << maxh.top().second.second << endl;
        maxh.pop();
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}