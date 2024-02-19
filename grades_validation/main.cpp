#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, average;

    cout << "Enter the 1st grade: ";
    cin >> a;

    while (a < 0 || a > 10) {
        cout << "Grade not valid! Try again: ";
        cin >> a;
    }

    cout << "Enter the 2nd grade: ";
    cin >> b;

    while (b < 0 || b > 10) {
        cout << "Grade not valid! Try again: ";
        cin >> b;
    }

    cout << fixed << setprecision(2);
    average = (a + b) / 2;

    cout << "Average = " << average << endl;



    return 0;
}
