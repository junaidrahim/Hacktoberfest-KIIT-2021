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

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for (int x : arr)
    //     cout << x;
    priority_queue<int, vector<int>, greater<int>> minh;
    // priority_queue<int, vector<int>, greater<int>> minh; //min heap
    for (int i = 0; i < n; i++)
    {
        minh.push(arr[i]);
        if (minh.size() > k)
        {
            minh.pop();
        }
    }
    // cout << minh.size();
    while (minh.size() > 0)
    {
        cout << minh.top();
        minh.pop();
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}