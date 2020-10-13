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

    int beg = 0;
    int end = n - 1;
    int ans = -1;

    while (beg <= end)
    {
        int mid = beg + ((end - beg) / 2);

        if (arr[mid] == s)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > s)
        {
            end = mid - 1;
        }
        else if (arr[mid] < s)
        {
            beg = mid + 1;
        }
    }

    cout << ans;

    return 0;
}