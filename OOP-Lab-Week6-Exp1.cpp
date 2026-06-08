// OOP-Lab-Week6-Exp1.cpp :
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNumber;
    string firstName;
    string lastName;
    string studentClass;
    int totalMarks;
    char grade;

public:
    Student()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter First Name: ";
        cin >> firstName;

        cout << "Enter Last Name: ";
        cin >> lastName;

        cout << "Enter Class: ";
        cin >> studentClass;

        cout << "Enter Total Marks: ";
        cin >> totalMarks;

        cout << "Enter Grade: ";
        cin >> grade;
    }

    void show()
    {
        cout << endl;
        cout << "Student Details:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student s1;

    s1.show();

    return 0;
}