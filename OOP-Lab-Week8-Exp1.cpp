// OOP-Lab-Week8-Exp1.cpp : T
#include <iostream>
using namespace std;

class Publication
{
protected:
    string title;
    float price;

public:
    void getdata()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    void putdata()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication
{
private:
    int pages;

public:
    void getdata()
    {
        Publication::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }

    void putdata()
    {
        Publication::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Publication
{
private:
    float time;

public:
    void getdata()
    {
        Publication::getdata();
        cout << "Enter playing time (minutes): ";
        cin >> time;
    }

    void putdata()
    {
        Publication::putdata();
        cout << "Playing Time: " << time << " minutes" << endl;
    }
};

int main()
{
    Book b1;
    Tape t1;

    cout << "Enter book details:" << endl;
    b1.getdata();

    cout << endl << "Enter tape details:" << endl;
    t1.getdata();

    cout << endl << "Book details:" << endl;
    b1.putdata();

    cout << endl << "Tape details:" << endl;
    t1.putdata();

    return 0;
}