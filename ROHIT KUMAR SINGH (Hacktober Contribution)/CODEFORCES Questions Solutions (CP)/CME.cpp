//Challenge 11:

/* Let's denote correct match equation (we will denote it as CME) an equation a+b=c there all integers a, b and c
are greater than zero.
For example, equations 2+2=4
(||+||=||||) and 1+2=3 (|+||=|||) are CME but equations 1+2=4 (|+||=||||), 2+2=3 (||+||=|||), and 0+1=1
(+|=|) are not.
Now, you have n
matches. You want to assemble a CME using all your matches. Unfortunately, it is possible that you can't 
assemble the CME using all matches. But you can buy some extra matches and then assemble CME!
For example, if n=2
, you can buy two matches and assemble |+|=||, and if n=5 you can buy one match and assemble ||+|=|||. */

#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
  }

    for(i=0;i<n;i++)
    {
        if(arr[i]<4)
        {
            cout<<4-arr[i]<<endl;
        }
        else if(arr[i]%2==0 && arr[i]>=4)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}