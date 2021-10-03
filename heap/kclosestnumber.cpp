#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <unordered_map>
#include <chrono>
#define in long long
#include <string>
using namespace std;

int main()
{
    auto start = chrono::steady_clock::now();

    int n, k, x;
    cin >> n >> k >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //using  multimap technique..........
    // multimap<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    // mp[abs(arr[i] - k)] = (arr[i]);
    //     mp.insert({abs(arr[i] - k), arr[i]});
    // }

    // int c = 0;
    // for (auto i = mp.begin(); i != mp.end(); i++)
    // {
    //     if (c < x)
    //     {
    //         cout << i->second << endl;
    //         c++;
    //     }
    // }

    //using heap

    // priority_queue<int,>
    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}