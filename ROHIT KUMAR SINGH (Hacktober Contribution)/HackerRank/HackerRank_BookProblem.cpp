#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    int n, p, turnPages;
    string StrtPoint;
    cin >> n >> p;
    int mid = ceil((n) / 2);

    if (p <= mid)
    {
        StrtPoint = "Front";
        turnPages = floor(float(p) / 2);
    }
    else
    {
        StrtPoint = "Back";
        if (n % 2 == 0)
        {
            turnPages = ceil((float(n) - float(p)) / 2);
        }
        else
        {
            turnPages = ceil((float(n) - (float(p) + 1)) / 2);
        }
    }

    cout << "Starting Point is " << StrtPoint << endl
         << "Turned pages is " << turnPages << endl;

    return 0;
}