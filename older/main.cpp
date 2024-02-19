#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int i, N, older, position;
    int ages[10];
    string names[10];

    cout << "How many persons do you want to type? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Data of the " << i + 1 << "a person:" << endl;
        cout << "Name: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, names[i]);
        cout << "Age: ";
        cin >> ages[i];

    }

    older = 0;
    for (i = 0; i < N; i++) {
        if (ages[i] > older) {
            older = ages[i];
            position = i;
        }
    }

    cout << "OLDER PERSON: " << names[position] << endl;

    return 0;
}
