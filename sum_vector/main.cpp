#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N;
    double sum, average;
    double vet[10];

    cout << "How many numbers do you want to type? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Enter one number: ";
        cin >> vet[i];
    }

    cout << fixed << setprecision(2);
    cout << "VALUES = ";
    for (i = 0; i < N; i++) {
        cout << vet[i] << " ";
    }

    cout << endl;
    sum = 0;
    for (i = 0; i < N; i++) {
        sum = sum + vet[i];
    }

    average = sum / N;
    cout << "SUM = " << sum << endl;
    cout << "AVERAGE = " << average << endl;



    return 0;
}
