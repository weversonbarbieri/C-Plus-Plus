#include <bits/stdc++.h>

using namespace std;

int main()
{
    double grade1, grade2, finalgrade;

    cout << "Enter the 1st grade: ";
    cin >> grade1;
    cout << "Enter the 2nd grade: ";
    cin >> grade2;

    cout << fixed << setprecision(1);
    finalgrade = grade1 + grade2;

    if (finalgrade < 60) {
        cout << "Final grade: " << finalgrade << endl;
        cout << "NOT APPROVED" << endl;
    } else {
        cout << "Final grade: " << finalgrade << endl;
    }



    return 0;
}
