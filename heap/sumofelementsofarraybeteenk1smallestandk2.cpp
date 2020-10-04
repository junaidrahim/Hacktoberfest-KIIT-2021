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

int kMin(vector<int> arr, int k)
{
    priority_queue<int> maxh;

    for (int i = 0; i < arr.size(); i++)
    {
        maxh.push(arr[i]);
        if (maxh.size() > k)
        {
            maxh.pop();
        }
    }

    return maxh.top();
}

int main()
{
    auto start = chrono::steady_clock::now();

    int n, k1, k2;
    cin >> n >> k1 >> k2;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int s = kMin(arr, k1);
    int e = kMin(arr, k2);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > s && arr[i] < e)
        {

            sum += arr[i];
        }
    }
    cout << sum;

    auto end = chrono::steady_clock::now();
    //cout << chrono::duration_cast<chrono::milliseconds>(end - start).count()<<endl;
    return 0;
}