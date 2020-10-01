#include <iostream>
using namespace std;
void area(double a);
void area(double a, double b);
void area(double a, double b, double c);

int main(void) {
    double x, y, z;

    cout << "Enter the values of X, Y & Z: ";
    cin >> x >> y >> z;

    if (y == 0.0 && z == 0.0)
        area(x);
    else if (z == 0.0)
        area(x, y);
    else
        area(x, y, z);
    
    
    return 0;
}

void area(double a) {
    double circleArea = 3.14 * a * a;
    cout << "Area of the circle: " << circleArea;
}

void area(double a, double b) {
    double rectArea = a * b;
    cout << "Area of the rectangle: " << rectArea;
}

void area(double a, double b, double c) {
    double boxVol = a * b * c;
    cout << "Volume of the box is: " << boxVol;
}
