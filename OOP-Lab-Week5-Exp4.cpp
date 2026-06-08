// OOP-Lab-Week5-Exp4.cpp 
#include <iostream>
using namespace std;
class ComplexNumber
{
private:
    double realPart;
    double imaginaryPart;

public:
    ComplexNumber()
    {
        realPart = 0;
        imaginaryPart = 0;
    }
ComplexNumber(double r, double i)
    {
        realPart = r;
        imaginaryPart = i;
    }
ComplexNumber add(const ComplexNumber& c) const
    {
        return ComplexNumber(realPart + c.realPart, imaginaryPart + c.imaginaryPart);
    }

    ComplexNumber sub(const ComplexNumber& c) const
    {
        return ComplexNumber(realPart - c.realPart, imaginaryPart - c.imaginaryPart);
    }

    ComplexNumber mul(const ComplexNumber& c) const
    {
        double r = realPart * c.realPart - imaginaryPart * c.imaginaryPart;
        double i = realPart * c.imaginaryPart + imaginaryPart * c.realPart;
        return ComplexNumber(r, i);
    }
void print() const
    {
        cout << realPart;
        if (imaginaryPart >= 0)
            cout << " + " << imaginaryPart << "j" << endl;
        else
            cout << " - " << -imaginaryPart << "j" << endl;
    }
};
int main()
{
    double r1, i1, r2, i2;
    cout << "Enter first complex number (real imaginary): ";
    cin >> r1 >> i1;
    cout << "Enter second complex number (real imaginary): ";
    cin >> r2 >> i2;
    ComplexNumber c1(r1, i1);
    ComplexNumber c2(r2, i2);
    ComplexNumber sum = c1.add(c2);
    ComplexNumber diff = c1.sub(c2);
    ComplexNumber prod = c1.mul(c2);
    cout << "Addition: ";
    sum.print();
    cout << "Subtraction: ";
    diff.print();
    cout << "Multiplication: ";
    prod.print();
    return 0;
}