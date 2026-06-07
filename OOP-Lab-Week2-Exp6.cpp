// OOP-Lab-Week2-Exp6.cpp 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class WageSystem {
private:
    int empCode;
    double ratePerHour = 11.0;
    string weekDays[5] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    int workHours[5];
    int workMins[5];
public:
    void getInput() {
        cout << "Enter Employee ID (EID): ";
        cin >> empCode;
       cout << endl << "Enter work hours for each day:" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << weekDays[i] << " Hours: ";
            cin >> workHours[i];
            cout << weekDays[i] << " Minutes: ";
            cin >> workMins[i];
        }
    }
    void showResult() {
        int sumHours = 0;
        int sumMins = 0;
        for (int i = 0; i < 5; ++i) {
            sumHours += workHours[i];
            sumMins += workMins[i];
        }

        sumHours += sumMins / 60;
        sumMins = sumMins % 60;
        double totalTime = sumHours + (double)sumMins / 60.0;
        double finalPay = totalTime * ratePerHour;
        cout << endl;
        cout << "----------------------------------------- WEEKLY WAGE REPORT-----------------------------------------" << endl;
        cout << "Employee ID (EID)   : " << empCode << endl;
        cout << "Total Work Time     : " << sumHours << " hours and " << sumMins << " minutes" << endl;
        cout << "Hourly Rate         : " << ratePerHour << " EUR/hour" << endl;
        cout << "Total Wage is given as" << endl;
        cout << "TOTAL WAGE          : " << fixed << setprecision(2) << finalPay << " EUR" << endl;
       };
int main() {
    WageSystem obj;
    obj.getInput();
    obj.showResult();
    return 0;
}