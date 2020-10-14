#include <iostream>

using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int r) { radius = r; }

    float area() override { return 3.14 * radius * radius; }
};

class Square : public Shape {
private:
    int side;

public:
    Square(int s) { side = s; }
    float area() override { return side * side; }
};

class Triangle : public Shape {
private:
    int base;
    int height;

public:
    Triangle(int b, int h) {
        base = b;
        height = h;
    }

    float area() override { return 0.5 * base * height; }
};

int main() {
    Circle c(10);
    Square s(20);
    Triangle t(4, 3);

    cout << "Area of circle: " << c.area() << endl;
    cout << "Area of square: " << s.area() << endl;
    cout << "Area of triangle: " << t.area() << endl;

    return 0;
}