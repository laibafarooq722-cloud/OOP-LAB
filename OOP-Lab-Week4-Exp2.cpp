// OOP-Lab-Week4-Exp2.cpp 
#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
    double pi = 3.14159;
public:
    Circle() {
        radius = 0.0;
    }
    Circle(double r) {
        radius = r;
    }
    void setRadius(double r) {
        radius = r;
    }
    double getRadius() {
        return radius;
    }
    double getArea() {
        return pi * radius * radius;
    }
    double getDiameter() {
        return radius * 2;
    }
    double getCircumference() {
        return 2 * pi * radius;
    }
};
int main() {
    double r;
    cout << "Enter radius of circle: ";
    cin >> r;
    Circle c(r);
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;
    return 0;
}