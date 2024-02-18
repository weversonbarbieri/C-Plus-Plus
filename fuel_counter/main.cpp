#include <bits/stdc++.h>

using namespace std;

int main()
{
    int code, alcohol, gasoline, diesel;

    alcohol = 0;
    gasoline = 0;
    diesel = 0;

    cout << "Enter a fuel code or 4 to stop: ";
    cin >> code;

    while (code != 4) {
        if (code == 1) {
            alcohol++;
        } else if (code == 2) {
            gasoline++;
        } else if (code == 3) {
            diesel++;
        }
        cout << "Enter a fuel code or 4 to stop: ";
        cin >> code;
    }

    cout << "THANK YOU!" << endl;
    cout << "Alcohol: " << alcohol << endl;
    cout << "Gasoline: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;

    return 0;
}
