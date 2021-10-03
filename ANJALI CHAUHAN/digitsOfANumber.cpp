// Constraints
// 1 <= n < 10^9

// Sample Input
// 65784383

// Sample Output
// 6
// 5
// 7
// 8
// 4
// 3
// 8
// 3


#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
   if(n <=9){
       cout<<n;
}
    else{
        func(n / 10);
        cout<<"\n"<< n % 10;
    }
}
int main()
{
   int n;
   cin>>n;
   func(n);
   return 0;
}