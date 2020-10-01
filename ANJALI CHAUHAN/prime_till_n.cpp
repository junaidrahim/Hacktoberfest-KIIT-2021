// all primes between low and high (both included)

// Constraints
// 2 <= low < high < 10 ^ 6

// Sample Input
// 6 
// 24

// Sample Output
// 7
// 11
// 13
// 17
// 19
// 23

#include<iostream>
using namespace std;
int main(){
    int low,high;
    cin>>low>>high;
    for(int num=low;num<=high;num++){
        int count=0;
        for(int i=2;i*i<=high;i++){
            if(num%i==0)
                count++;
        }
        if(count==0)
            cout<<num<<endl;
    }
    return 0;
}