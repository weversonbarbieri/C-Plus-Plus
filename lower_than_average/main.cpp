#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N;
    double sum, average;
    double vet[10];

    cout << "How many numbers will contain the vector? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Enter one number: ";
        cin >> vet[i];
    }

    sum = 0;
    for (i = 0; i < N; i++) {
        sum = sum + vet[i];
    }

    cout << endl;
    cout << fixed << setprecision(3);
    average = (double) sum / N;
    cout << "AVERAGE VECTOR = " << average << endl;

    cout << fixed << setprecision(1);
    cout << "VALUES LOWER THAN AVERAGE:" << endl;
    for (i = 0; i < N; i++) {
        if (vet[i] < average) {
            cout << vet[i] << endl;
        }
    }



    return 0;
}
