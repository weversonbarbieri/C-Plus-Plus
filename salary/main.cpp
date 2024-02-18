#include <bits/stdc++.h>


using namespace std;

int main()
{
    int hours;
    double hourlyrate, salary;
    string name;

    cout << "Employee name: ";
    getline(cin, name);
    //cin.ignore(INT_MAX, '\n');
    cout << "Hourly rate: ";
    cin >> hourlyrate;
    cout << "Worked hours: ";
    cin >> hours;

    cout << fixed << setprecision(2);
    salary = hourlyrate * hours;

    cout << "The salary to " << name << " will be " << salary << endl;


    return 0;
}
