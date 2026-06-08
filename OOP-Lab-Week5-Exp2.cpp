// OOP-Lab-Week5-Exp2.cpp :
#include <iostream>
using namespace std;
class Travel
{
private:
    int km;
    int hr;
public:
    Travel()
    {
        km = 0;
        hr = 0;
    }
void input()
    {
        cout << "Enter kilometers: ";
        cin >> km;
        cout << "Enter hours: ";
        cin >> hr;
    }
void show()
    {
        cout << "Kilometers: " << km << endl;
        cout << "Hours: " << hr << endl;
    }
void add(Travel p)
    {
        int totalKm = km + p.km;
        int totalHr = hr + p.hr;

        cout << "After adding:" << endl;
        cout << "Total Kilometers: " << totalKm << endl;
        cout << "Total Hours: " << totalHr << endl;
    }
};
int main()
{
    Travel t1, t2;
    cout << "Enter data for first object:" << endl;
    t1.input();
    cout << "Enter data for second object:" << endl;
    t2.input();
    cout << "First object data:" << endl;
    t1.show();
    cout << "Second object data:" << endl;
    t2.show();
    cout << endl;
    t1.add(t2);
     return 0;
}