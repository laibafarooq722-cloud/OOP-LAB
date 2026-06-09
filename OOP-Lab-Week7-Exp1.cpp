// OOP-Lab-Week7-Exp1.cpp : 
#include <iostream>
using namespace std;

class Complex
{
private:
    double rp;
    double ip;

public:
    Complex()
    {
        rp = 0;
        ip = 0;
    }

    Complex(double r, double i)
    {
        rp = r;
        ip = i;
    }

    void input()
    {
        cout << "Enter real part: ";
        cin >> rp;
        cout << "Enter imaginary part: ";
        cin >> ip;
    }

    Complex operator+(const Complex& c)
    {
        return Complex(rp + c.rp, ip + c.ip);
    }

    Complex operator-(const Complex& c)
    {
        return Complex(rp - c.rp, ip - c.ip);
    }

    Complex operator*(const Complex& c)
    {
        double r = rp * c.rp - ip * c.ip;
        double i = rp * c.ip + ip * c.rp;
        return Complex(r, i);
    }

    Complex operator=(const Complex& c)
    {
        rp = c.rp;
        ip = c.ip;
        return *this;
    }

    void print()
    {
        cout << rp;
        if (ip >= 0)
            cout << " + " << ip << "j" << endl;
        else
            cout << " - " << -ip << "j" << endl;
    }
};

int main()
{
    Complex c, b;

    cout << "Enter first complex number:" << endl;
    c.input();

    cout << endl << "Enter second complex number:" << endl;
    b.input();

    Complex add = c + b;
    Complex sub = c - b;
    Complex mul = c * b;

    Complex assign;
    assign = c;

    cout << endl << "Addition: ";
    add.print();

    cout << "Subtraction: ";
    sub.print();

    cout << "Multiplication: ";
    mul.print();

    cout << "After assignment (assign = c): ";
    assign.print();

    return 0;
}