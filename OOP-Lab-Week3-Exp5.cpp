// OOP-Lab-Week3-Exp5.cpp 
#include <iostream>
using namespace std;
class Message {
public:
   Message() {
        cout << "An object of this class has been successfully created!" << endl;
    }
};
int main() {
    cout << "Creating the first object:" << endl;
    Message obj1;
    cout << "\nCreating a second object:" << endl;
    Message obj2;
    return 0;
}