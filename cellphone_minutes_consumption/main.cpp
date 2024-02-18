#include <bits/stdc++.h>

using namespace std;

int main()
{
    int minutes, totalminutes;
    double pay, totalspent, franchise;

    franchise = 50.00;
    cout << "Enter the minutes spent: ";
    cin >> minutes;

    cout << fixed << setprecision(2);
    if (minutes > 100) {
        totalminutes = minutes - 100;
        totalspent = totalminutes * 2;
        pay = franchise + totalspent;
        cout << "Dued value: R$ " << pay << endl;
    } else {
        cout << "Dued value: R$ " << franchise << endl;
    }



    return 0;
}
