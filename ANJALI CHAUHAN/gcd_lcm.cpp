// Constraints
// 2 <= n <= 10^9

// Sample Input
// 36
// 24

// Sample Output
// 12
// 72


#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<lcm(a,b)<<endl;
    return 0;
}





