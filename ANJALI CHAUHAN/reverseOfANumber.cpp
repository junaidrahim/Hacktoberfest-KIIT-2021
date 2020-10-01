// Constraints
// 1 <= n < 10^9

// Sample Input
// 65784383

// Sample Output
// 3
// 8
// 3
// 4
// 8
// 7
// 5
// 6


#include<iostream>
using namespace std;
int main(){
    int num,rem;
    cin>>num;
    while(num)
    {
        rem=num%10;
        cout<<rem<<endl;
        num=num/10;
    } 
    return 0;
}