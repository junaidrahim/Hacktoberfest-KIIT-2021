// Input Format
// n

// Constraints
// 1 <= n < 40

// Sample Input
// 10

// Sample Output
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34

#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c=0,temp=0;
    cin>>n;
    cout<<a<<endl;
    cout<<b<<endl;
    if(n==0 || n==1)
        return n;
    for(int i=2;i<n;i++){
        c=a+b;
        temp=a;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    return 0;
}