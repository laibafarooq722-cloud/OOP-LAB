// OOP-Lab-Week5-Exp5.cpp : 
#include <iostream>
using namespace std;
class Room
{
private:
    double width;
public:
    void setWidth(double w)
    {
        width = w;
    }
friend void printWidth(Room r);
};
void printWidth(Room r)
{
    cout << "Width of room: " << r.width << endl;
}
int main()
{
    Room r1;
    r1.setWidth(10.10);
    printWidth(r1);
    return 0;
}