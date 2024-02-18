#include <bits/stdc++.h>

using namespace std;

int main()
{
    int age1, age2;
    double averageage;
    string name1, name2;

    cout << "Enter the data of the 1st person: " << endl;
    cout << "Name: ";
    getline(cin, name1);
    cout << "Age: ";
    cin >> age1;

    cout << "Enter the data of the 2st person: " << endl;
    cout << "Name: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, name2);
    cout << "Age: ";
    cin >> age2;

    averageage = (age1 + age2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "The average age from " << name1 << " and " << name2 << " is " << averageage << " years old." << endl;


    return 0;
}
