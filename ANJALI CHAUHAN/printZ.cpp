// *****
//    *
//   *
//  *
// *****


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int x = 0; x < n; x++)
    {
        cout << "*";
    }
    cout << endl;
    for (int x = n - 3; x >= 0; x--)
    {
        for (int y = x; y >= 0; y--)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }
    for (int x = 0; x < n; x++)
    {
        cout << "*";
    }

    return 0;
}