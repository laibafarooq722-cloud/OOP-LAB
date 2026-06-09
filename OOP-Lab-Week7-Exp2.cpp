// OOP-Lab-Week7-Exp2.cpp :
#include <iostream>
using namespace std;

class Month
{
private:
    string name;
    int monthNumber;

    string getNameFromNumber(int num)
    {
        string months[] = { "January","February","March","April","May","June",
                           "July","August","September","October","November","December" };
        return months[num - 1];
    }

    int getNumberFromName(string n)
    {
        string months[] = { "January","February","March","April","May","June",
                           "July","August","September","October","November","December" };

        for (int i = 0; i < 12; i++)
        {
            if (months[i] == n)
                return i + 1;
        }
        return 1;
    }

public:
    Month()
    {
        monthNumber = 1;
        name = "January";
    }

    Month(string n)
    {
        name = n;
        monthNumber = getNumberFromName(n);
    }

    Month(int num)
    {
        monthNumber = num;
        name = getNameFromNumber(num);
    }

    void setName(string n)
    {
        name = n;
        monthNumber = getNumberFromName(n);
    }

    void setMonthNumber(int num)
    {
        monthNumber = num;
        name = getNameFromNumber(num);
    }

    string getName()
    {
        return name;
    }

    int getMonthNumber()
    {
        return monthNumber;
    }

    Month operator++()
    {
        monthNumber++;
        if (monthNumber > 12)
            monthNumber = 1;

        name = getNameFromNumber(monthNumber);
        return *this;
    }

    Month operator++(int)
    {
        Month temp = *this;
        monthNumber++;
        if (monthNumber > 12)
            monthNumber = 1;

        name = getNameFromNumber(monthNumber);
        return temp;
    }

    Month operator--()
    {
        monthNumber--;
        if (monthNumber < 1)
            monthNumber = 12;

        name = getNameFromNumber(monthNumber);
        return *this;
    }

    Month operator--(int)
    {
        Month temp = *this;
        monthNumber--;
        if (monthNumber < 1)
            monthNumber = 12;

        name = getNameFromNumber(monthNumber);
        return temp;
    }

    friend ostream& operator<<(ostream& out, Month m)
    {
        out << m.name << " (" << m.monthNumber << ")" << endl;
        return out;
    }

    friend istream& operator>>(istream& in, Month& m)
    {
        cout << "Enter month number (1-12): ";
        in >> m.monthNumber;
        m.name = m.getNameFromNumber(m.monthNumber);
        return in;
    }
};

int main()
{
    Month m1;

    cout << "Default month: " << m1;

    cout << endl;
    cin >> m1;

    cout << "After input: " << m1;

    ++m1;
    cout << "After prefix ++: " << m1;

    m1++;
    cout << "After postfix ++: " << m1;

    --m1;
    cout << "After prefix --: " << m1;

    m1--;
    cout << "After postfix --: " << m1;

    return 0;
}