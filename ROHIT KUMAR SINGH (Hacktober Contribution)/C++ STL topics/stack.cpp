//Implementation of STACK

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    //Declaration of stack
    stack<int> stk;
    
    //Pushing elements into the stack
    stk.push(10);
    stk.push(200);
    stk.push(3000);
    stk.push(40000);

    //For poping and displaying the elements of the stack
    cout<<"\n*****STACK ELEMENTS ARE*****\n"<<endl;
    while(!stk.empty())
    {
        cout<<stk.top()<<endl;
        stk.pop();
    }

    return 0;
}