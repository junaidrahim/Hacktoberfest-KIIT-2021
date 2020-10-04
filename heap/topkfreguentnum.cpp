#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <chrono>
#define in long long
#include <string>
using namespace std;
typedef pair<int, int> pi;
// print the k frequent numbers
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
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    // using set approach ...............
    // set<pair<int, int>, greater<pair<int, int>>> s;
    // for (auto i = mp.begin(); i != mp.end(); i++)
    // {
    //     s.insert({i->second, i->first});
    // }
    // int c = 0;
    // for (auto i = s.begin(); i != s.end(); i++)
    // {
    //     // cout << i->first << " " << i->second << endl;
    //     if (c < k)
    //     {
    //         cout << i->second << endl;
    //         /* code */
    //         c++;
    //     }
    // }

    //using heap......
    //the reason to use the heap is......we dont need to sort the whole thing ....
    //it will be much better to use the heap

    priority_queue<pi, vector<pi>, greater<pi>> minh;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        // cout << i->first << " " << i->second << endl;
        minh.push({i->second, i->first});
        if (minh.size() > k)
        {
            minh.pop();
        }
    }
    while (minh.size() > 0)
    {
        // cout << minh.top().first << " " << minh.top().second << endl;
        cout << minh.top().second << endl;
        minh.pop();
    }

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}