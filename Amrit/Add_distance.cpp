#include  <iostream>
using namespace std;
 
class Distance
{
    private:
        int feet;
        int inch;
    public:
        Distance ();
        Distance(int, int);
        void showDist ();
        Distance addDist( Distance d1, Distance d2 );
};
 
Distance:: Distance ()
{
    feet = 0; inch = 0;
}
Distance ::Distance(int ft, int in)
{
            feet = ft;
            inch = in;
        }
 
void Distance:: showDist()
{
    cout << endl << "\tFeets : " << feet;
    cout << endl << "\tInches: " << inch;
}
 
 
Distance Distance:: addDist( Distance d1 , Distance d2)
{
 
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
            
        while (inch > 12){
        feet++;
        inch -= 12;
    }    
}
 
int main()
{
    Distance obj1(5,10), obj2(6,4), obj3;
    obj3.addDist(obj1, obj2);
    cout<<endl;
    obj3.showDist();
    return 0;
}
