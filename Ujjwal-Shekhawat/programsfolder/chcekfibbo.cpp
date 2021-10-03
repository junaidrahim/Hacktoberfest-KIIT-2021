#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int x;
    cin >> x;
    if(5*x*x + 4 == sqrt(5*x*x + 4))
    {
        cout << "Yes";
    }

    if(5*x*x - 4 == sqrt(5*x*x - 4))
    {
        cout << "Yes";
    }

    return 0;
}