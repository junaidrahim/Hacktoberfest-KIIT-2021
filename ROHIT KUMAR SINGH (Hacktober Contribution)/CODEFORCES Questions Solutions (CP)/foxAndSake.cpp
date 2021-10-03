//13-07-2020
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int val = 1;
    cin>>r>>c;
    for (int i =0;i<r;i++)
    {
       for(int j=0; j<c; j++)
       {
          if(i%2==0)
          {
              cout<<"#";
          }
          else
          {
              
              if(j==c-1 && val==1)
              {
                  cout<<"#";
              }
              else if (j==0 and val==0)
              {
                  cout<<"#";
              }
              
              else
              {
                  cout<<".";
              }
          }
       }
       if(val==1 && i%2!=0)
       {
           val=0;
       }
       else if(val==0 && i%2!=0)
       {
           val=1;
       }
       cout<<endl;
    }
    return 0;
}