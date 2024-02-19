#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, numerador, denumerator;
    double division;

    cout << "How many cases will be typed? ";
    cin >> N;

    cout << fixed << setprecision(2);
    for (i = 0; i < N; i++) {
        cout << "Enter the numerator: ";
        cin >> numerador;
        cout << "Enter the denumerator: ";
        cin >> denumerator;

        if (denumerator == 0) {
            cout << "DIVISION NOT POSSIBLE" << endl;
        } else {
            division = (double) numerador / denumerator;
            cout << "DIVISION RESULT = " << division << endl;
        }

    }

    cout << endl;

    return 0;
}
