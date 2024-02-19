#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, sumevens;
    int vet[10];

    cout << "How many numbers do you want to type? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Enter one number: ";
        cin >> vet[i];
    }

    sumevens = 0;
    cout << endl;
    cout << "EVEN NUMBERS:" << endl;
    for (i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
           sumevens = sumevens + 1;
           cout << vet[i] << " ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "EVENS QUANTITY = " << sumevens << endl;




    return 0;
}
