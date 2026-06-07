// OOP-Lab-Week1-Exp4.cpp 
#include <iostream>
using namespace std;
struct student {
    int studentID;
    string studentName;
    string courseID;
    int courseMarks;
};
int main() {
    student st1, st2, st3, st4;
    int totalMarks = 0;
// Student 1
    cout << "-----------Student1 Details-------------" << endl;
    cout << "Enter Student 1 ID: ";
    cin >> st1.studentID;
    cout << "Enter Student 1 Name: ";
    cin >> st1.studentName;
    cout << "Enter Course ID: ";
    cin >> st1.courseID;
    cout << "Enter Marks: ";
    cin >> st1.courseMarks;
// Student 2
    cout << "-----------Student2 Details-------------" << endl;
    cout << "\nEnter Student 2 ID: ";
    cin >> st2.studentID;
    cout << "Enter Student 2 Name: ";
    cin >> st2.studentName;
    cout << "Enter Course ID: ";
    cin >> st2.courseID;
    cout << "Enter Marks: ";
    cin >> st2.courseMarks;
    // Student 3
    cout << "-----------Student3 Details-------------" << endl;
    cout << "\nEnter Student 3 ID: ";
    cin >> st3.studentID;
    cout << "Enter Student 3 Name: ";
    cin >> st3.studentName;
    cout << "Enter Course ID: ";
    cin >> st3.courseID;
    cout << "Enter Marks: ";
    cin >> st3.courseMarks;
// Student 4
    cout << "-----------Student4 Details-------------" << endl;
    cout << "\nEnter Student 4 ID: ";
    cin >> st4.studentID;
    cout << "Enter Student 4 Name: ";
    cin >> st4.studentName;
    cout << "Enter Course ID: ";
    cin >> st4.courseID;
    cout << "Enter Marks: ";
    cin >> st4.courseMarks;
    totalMarks = st1.courseMarks + st2.courseMarks + st3.courseMarks + st4.courseMarks; cout << "Total Marks of all students = " << totalMarks << endl;
    return 0;
}