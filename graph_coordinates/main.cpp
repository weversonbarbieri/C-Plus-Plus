#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cout << "Enter X value: ";
    cin >> x;
    cout << "Enter Y value: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Q2" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Q4" << endl;
    } else if (x == 0 && y == 0) {
        cout << "Origem";
    } else if (x == 0) {
        cout << "Axis Y" << endl;
    } else if (y == 0) {
        cout << "Axis X" << endl;
    }


    return 0;
}
