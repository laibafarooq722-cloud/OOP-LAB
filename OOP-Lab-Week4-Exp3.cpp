// OOP-Lab-Week4-Exp3.cpp : 
#include <iostream>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }

    Inventory(int num, int qty, double c) {
        setItemNumber(num);
        setQuantity(qty);
        setCost(c);
        setTotalCost();
    }

    void setItemNumber(int num) {
        if (num >= 0)
            itemNumber = num;
        else
            itemNumber = 0;
    }

    void setQuantity(int qty) {
        if (qty >= 0)
            quantity = qty;
        else
            quantity = 0;
    }

    void setCost(double c) {
        if (c >= 0)
            cost = c;
        else
            cost = 0;
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    int getItemNumber() {
        return itemNumber;
    }

    int getQuantity() {
        return quantity;
    }

    double getCost() {
        return cost;
    }

    double getTotalCost() {
        return totalCost;
    }
};

int main() {
    int num, qty;
    double c;

    cout << "Enter item number: ";
    cin >> num;

    cout << "Enter quantity: ";
    cin >> qty;

    cout << "Enter cost per item: ";
    cin >> c;

    Inventory item(num, qty, c);

    cout << endl;
    cout << "Item Number: " << item.getItemNumber() << endl;
    cout << "Quantity: " << item.getQuantity() << endl;
    cout << "Cost per item: " << item.getCost() << endl;
    cout << "Total Cost: " << item.getTotalCost() << endl;

    return 0;
}