// OOP-Lab-Week4-Exp1.cpp 
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;
public:
    Employee()
    {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }
Employee(string n, int id, string dept, string pos)
    {
        setName(n);
        setIdNumber(id);
        setDepartment(dept);
        setPosition(pos);
    }
Employee(string n, int id)
    {
        setName(n);
        setIdNumber(id);
        department = "";
        position = "";
    }
void setName(string n)
    {
        name = n;
    }
void setIdNumber(int id)
    {
        idNumber = id;
    }
void setDepartment(string dept)
    {
        department = dept;
    }
void setPosition(string pos)
    {
        position = pos;
    }
string getName()
    {
        return name;
    }
int getIdNumber()
    {
        return idNumber;
    }
string getDepartment()
    {
        return department;
    }
string getPosition()
    {
        return position;
    }
void displayData()
    {
        cout << "Name: " << getName() << endl;
        cout << "ID Number: " << getIdNumber() << endl;
        cout << "Department: " << getDepartment() << endl;
        cout << "Position: " << getPosition() << endl;
    }
};
int main()
{
    string name, department, position;
    int id;
    cout << "Enter details for Employee 1:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "ID Number: ";
    cin >> id;
    cout << "Department: ";
    cin >> department;
    cout << "Position: ";
    cin >> position;
    Employee emp1(name, id, department, position);
    cout << "Enter details for Employee 2:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "ID Number: ";
    cin >> id;
Employee emp2(name, id);
Employee emp3;
cout << "Detail of Employees" << endl;
    cout << "Employee 1 Details :" << endl;
    emp1.displayData();
    cout << "Employee 2 Details :" << endl;
    emp2.displayData();
    cout << "Employee 3 Details :" << endl;
    emp3.displayData();
     return 0;
}