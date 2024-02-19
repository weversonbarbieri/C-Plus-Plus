#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, sumevens, sum;
    double average;
    int vet[10];

    cout << "How many elements will contain the vector? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Enter one number: ";
        cin >> vet[i];
    }

    sum = 0;
    sumevens = 0;
    for (i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            sum = sum + vet[i];
            sumevens = sumevens + 1;
        }
    }

    cout << fixed << setprecision(1);
    if (sum == 0) {
        cout << "NONE EVEN NUMBERS ENTERED" << endl;
    } else {
        average = sum / sumevens;
        cout << "AVERAGE EVENS = " << average << endl;
    }




    return 0;
}
