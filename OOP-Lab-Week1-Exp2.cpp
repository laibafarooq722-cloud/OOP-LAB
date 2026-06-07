// OOP-Lab-Week1-Exp2.cpp 
#include <iostream>
#include <cstdio> 
using namespace std;
struct Date {
    int month;
    int day;
    int year;
};
int main() {
    Date d1;
    while (true) {
        printf("Enter date (MM/DD/YYYY): ");
        scanf_s("%d/%d/%d", &d1.month, &d1.day, &d1.year);
        if (d1.month >= 1 && d1.month <= 12 && d1.day >= 1 && d1.day <= 31 &&d1.year > 0) {
            break;
        }
        else {
            printf("Invalid date! Please enter again.\n");
        }
    }
printf("\nDate is: %d/%d/%d\n", d1.month, d1.day, d1.year);
return 0;
}