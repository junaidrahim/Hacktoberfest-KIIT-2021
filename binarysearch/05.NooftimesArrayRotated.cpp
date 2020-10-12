#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#define in long long
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &it : arr)
        cin >> it;

    int beg = 0;
    int end = n - 1;
    while (beg <= end)
    {
        int mid = beg + ((end - beg) / 2);
        int prev = (mid + n - 1) % n;
        int next = (mid + 1) % n;
        // int prev = mid - 1;
        // int next = mid + 1;
        if (arr[prev] >= arr[mid] && arr[next] >= arr[mid])
        {
            cout << mid;
            break;
        }
        else if (arr[beg] <= arr[mid])
        {
            beg = mid + 1;
        }
        else if (arr[mid] <= arr[end])
        {
            end = mid - 1;
        }
    }

    return 0;
}