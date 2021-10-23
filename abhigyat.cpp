#include<iostream>
using namespace std;
int  main()
{
    int number;
    cin>>number;
    int  num = number;
    int armstrong=0;
    while (number>0)
    {
        int lastdigit=number%10;
        armstrong=armstrong+(lastdigit*lastdigit*lastdigit);
        number=number/10;
    }
    if (num==armstrong){
        cout<<"its a armstrong number";
    }
    else{
        cout<<"its not a armstrong number";
    }
    
}
