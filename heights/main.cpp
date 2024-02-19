#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, sumages;
    double averageH, percentageage, sumheights, averageageheights;
    double hei[10];
    int ages[10];
    string names[10];

    cout << "How many numbers do you want to type? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Data of the " << i + 1 << " person:" << endl;
        cout << "Name: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, names[i]);
        cout << "Age: ";
        cin >> ages[i];
        cout << "Heights: ";
        cin >> hei[i];
    }

    cout << fixed << setprecision(2);
    sumheights = 0;
    for (i = 0; i < N; i++) {
        sumheights = sumheights + hei[i];
    }

    cout << endl;
    averageageheights = sumheights / N;
    cout << "Average height: " << averageageheights << endl;

    sumages = 0;
    for (i = 0; i < N; i++) {
        if (ages[i] < 16) {
           sumages = sumages + 1;
        }
    }
    cout << fixed << setprecision(1);
    percentageage = (100 * sumages) / N;
    cout << "Persons younger than 16 years old: " << percentageage << "%" << endl;

    for (i = 0; i < N; i++) {
        if (ages[i] < 16) {
           cout << names[i] << endl;
        }
    }






    return 0;
}
