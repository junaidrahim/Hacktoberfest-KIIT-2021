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

void print(int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << n << " ";
    }
    // cout << endl;
}
int main()
{
    auto start = chrono::steady_clock::now();

    int k;
    cin >> k;
    vector<int> arr(k);
    unordered_map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
        // s.insert(m);
    }

    for (int i = 0; i < k; i++)
    {
        mp[arr[i]]++;
    }
    multimap<int, int, greater<int>> mph;
    /* using the fucking multimap
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        // cout << i->first << " " << i->second;
        int ele = i->first;
        int fre = i->second;
        // print(ele, fre);
        mph.insert({i->second, i->first});
    }
    for (auto i = mph.begin(); i != mph.end(); i++)
    {
        // cout << i->first << " " << i->second << endl;
        int fre = i->first;
        int ele = i->second;
        print(ele, fre);
        // mph.insert({i->second, i->first});
    }
    // cout << endl;
    */

    // using the max heap

    //why i m using max heap because i want the elements to be sorted in the decreasing order

    priority_queue<pair<int, int>> maxh;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        // cout << i->first << " " << i->second;

        maxh.push({i->second, i->first});
    }

    while (maxh.size() > 0)
    {
        /* code */
        int fre = maxh.top().first;
        int ele = maxh.top().second;
        print(ele, fre);
        maxh.pop();
    }

    //   the reason behind this is that when we remove 1 element from the heap, i..e.. whwm i used the pop function it internally maintains the order and the send the max element at the top.......

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}