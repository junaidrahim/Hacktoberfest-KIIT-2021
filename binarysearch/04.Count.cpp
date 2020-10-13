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

    int s;
    cin >> s;

    int res1 = 0;
    int res2 = 0;
    int beg1 = 0;
    int end1 = n - 1;
    int beg2 = 0;
    int end2 = n - 1;
    // first occurence..........
    while (beg1 <= end1)
    {
        int mid1 = beg1 + ((end1 - beg1) / 2);
        if (arr[mid1] == s)
        {
            res1 = mid1;
            end1 = mid1 - 1;
        }
        else if (arr[mid1] > s)
        {
            end1 = mid1 - 1;
        }
        else if (arr[mid1] < s)
        {
            beg1 = mid1 + 1;
        }
    }

    // last occurence................

    while (beg2 <= end2)
    {
        int mid2 = beg2 + ((end2 - beg2) / 2);
        if (arr[mid2] == s)
        {
            res2 = mid2;
            // end2 = mid2 - 1;
            beg2 = mid2 + 1;
        }
        else if (arr[mid2] > s)
        {
            beg2 = mid2 + 1;
        }
        else if (arr[mid2] < s)
        {
            end2 = mid2 - 1;
        }
    }

    // cout << res1;
    // cout << res2;

    cout << abs(res1 - res2) + 1;
    return 0;
}