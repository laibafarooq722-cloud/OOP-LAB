// OOP-Lab-week5-Exp3.cpp 
#include <iostream>
using namespace std;
class Capital
{
private:
    static int count;
public:
    Capital()
    {
        count++;
    }
 void show()
    {
        cout << "Number of objects created: " << count << endl;
    }
};
int Capital::count = 0;

int main()
{
    Capital x;
    x.show();
    Capital y;
    y.show();
    Capital z;
    z.show();
    return 0;
}