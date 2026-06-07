// OOP-Lab-Week2-Exp4.cpp 
#include <iostream>
using namespace std;
struct MovieData {
    string title;
    string director;
    int year;
    int time;
};
void showMovie(MovieData m) {
    cout << endl;
    cout << "Title: " << m.title << endl;
    cout << "Director: " << m.director << endl;
    cout << "Year Released: " << m.year << endl;
    cout << "Running Time: " << m.time << " minutes" << endl;
}
int main() {
    MovieData m1, m2;
    cout << "First Movie Details"<< endl;
    cout << "Enter first movie title: ";
    cin >> m1.title;
    cout << "Enter director: ";
    cin>>m1.director;
    cout << "Enter year: ";
    cin >> m1.year;
    cout << "Enter running time: ";
    cin >> m1.time;
    cout << endl;
    cout<< "Second Movie Details"<<endl;
    cout << "Enter second movie title: ";
    cin >> m2.title;
    cout << "Enter director: ";
    cin >> m2.director;
    cout << "Enter year: ";
    cin >> m2.year;
    cout << "Enter running time: ";
    cin >> m2.time;
    showMovie(m1);
    showMovie(m2);
    return 0;
}