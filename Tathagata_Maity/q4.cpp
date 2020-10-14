#include <iostream>
using namespace std;

class Base // it is an abstract class as it has a pure virtual function
{
public:
    virtual void fun() = 0; // pure virtual function as it is not defined here
}; 

class Derived : public Base
{

public:
    void fun() { cout << "hello world " << endl; }
};

int main(void)
{
    Derived d;
    d.fun();
    return 0;
}