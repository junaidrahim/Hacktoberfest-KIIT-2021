#include <iostream>
using namespace std;

class Employee{
public:
    string employee_name;
    int id;
    virtual double salary() = 0;
    
};

class Regular: public Employee{
    double DA;
    double HRA;
    double basic_salary;
public:
    Regular(string name, int n, double da, double hra, double bsa){
        DA= da;
        HRA =hra;
        basic_salary=bsa;
        employee_name = name;
        id = n;
    }
    double salary(){
        return DA+HRA + basic_salary;
    }
    void details(){
        cout<<"The name of employee: "<<employee_name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary()<<endl;
    }
    ~Regular(){};
};

class Part_Time: public Employee{
    int hrs;
    double pay_per_hour;
public:
    Part_Time(string name, int n, int hr, double pay){ 
        employee_name=name;
        id=n;
        hrs=hr;
        pay_per_hour=pay;
    }
    double salary(){
        return pay_per_hour*hrs;
    }
    void details(){
        cout<<"The name of employee: "<<employee_name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary()<<endl;
    }
};
int main(){
    Regular r("Ram", 1001, 200, 500, 1000);
    Part_Time p("Rahul", 2450, 20, 50);

    r.details();
    p.details();

    return 0;
}