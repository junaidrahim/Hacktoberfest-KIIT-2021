#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <chrono>
#include <queue>
#define in long long
#include <cstring>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        arr.push_back(m);
    }

    priority_queue<int> maxh;
    priority_queue<int, vector<int>, greater<int>> minh; //min heap
    for (int i = 0; i < n; i++)
    {
        maxh.push(arr[i]);
        if (maxh.size() > k)
        {
            maxh.pop();
        }
    }
    cout << maxh.top();

    auto end = chrono::steady_clock::now();
    // cout << endl
    //      << chrono::duration_cast<chrono::milliseconds>(end - start).count() << endl;
    return 0;
}