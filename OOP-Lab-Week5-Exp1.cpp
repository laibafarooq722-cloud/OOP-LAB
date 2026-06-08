// OOP-Lab-Week5-Exp1.cpp 
#include <iostream>
using namespace std;

class Payroll {
private:
    double rate;
    double hours;
    double totalPay;
public:
    void setRate(double r) {
        rate = r;
    }
void setHours(double h) {
        if (h >= 0 && h <= 60)
            hours = h;
        else
            hours = 0;
    }
void calculatePay() {
        totalPay = rate * hours;
    }
double getPay() {
        return totalPay;
    }
};
int main() {
    Payroll emp[7];
    double rate, hrs;
cout << "Enter hourly pay rate: ";
    cin >> rate;
for (int i = 0; i < 7; i++) {
        cout << "Enter hours worked for employee " << i + 1 << ": ";
        cin >> hrs;
        emp[i].setRate(rate);
        emp[i].setHours(hrs);
        emp[i].calculatePay();
    }
cout << endl << "Weekly Gross Pay:" << endl;
for (int i = 0; i < 7; i++) {
 cout << "Employee " << i + 1 << ": " << emp[i].getPay() << endl;
    }
return 0;
}