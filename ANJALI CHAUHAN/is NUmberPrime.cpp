// input
// 5
// 19
// 21
// 33
// 37
// 121

// output
// prime
// not prime
// not prime
// prime
// not prime

#include<iostream>
using namespace std;
int main(){
        int t,n;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>n;
            int count=0;
            
            for(int i=2;i*i<=n;i++){
                if(n%i == 0){
                    count++;
                    break;
                }
            }
            if(count==0){
                cout<<"prime"<<endl;
            }
            else{
                cout<<"not prime"<<endl;
            }
        }
    return 0;
}