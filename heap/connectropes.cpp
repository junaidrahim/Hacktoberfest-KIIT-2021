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

    int n;
    cin >> n;
    vector<int> arr(n);
    priority_queue<int, vector<int>, greater<int>> minh;
    for (int i = 0; i < n; i++)
    {
        // cin >> arr[i];
        int k;
        cin >> k;
        minh.push(k);
    }

    int totalcost = 0;
    for (int i = 0; i < n; i++)
    {
        if (minh.size() >= 2)
        {
            int f = minh.top();
            minh.pop();
            int s = minh.top();
            minh.pop();
            totalcost += f;
            totalcost += s;
            minh.push(f + s);
        }
    }
    cout << totalcost;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}