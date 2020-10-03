//Challenge 10:

#include<iostream>
using namespace std;
int main()
{
    int no;
    cin>>no;
    char arr[no];
    int count_n=0,count_z=0;
    for(int i = 0 ;i<no;i++)
    {
        cin>>arr[i];
        if(arr[i]=='n')
        {
            count_n++;
        }
        else if(arr[i]=='z')
        {
            count_z++;
        }
    }

while (count_n!=0)
{
    cout<<"1 ";
    count_n--;
}
while (count_z!=0)
{
    cout<<"0 ";
    count_z--;
}

    return 0;
}