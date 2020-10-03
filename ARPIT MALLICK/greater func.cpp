#include<iostream>
using namespace std;
class Second;
class First
{
int x;
public:
void getData(int a=5)
	{
	x=a;
	cout<<"Your first number is :"<< x << endl;
}
friend void max(First obj1,Second obj2);
}; 
class Second
{
int y;
public:
    void getData(int b=6)
{
	y=b;
	cout<<"Your second number is :"<< y << endl;
}
friend void max(First obj1,Second obj2);
};

void max(First obj1,Second obj2)
{
int max = obj1.x > obj2.y ? obj1.x:obj2.y;
cout<<"THE greatest number among the two numbers is : "<< max << endl;
}
int main()
{
First obj1;
Second obj2;
obj1.getData(45);
obj2.getData(80);
max(obj1,obj2);
return 0;
}
