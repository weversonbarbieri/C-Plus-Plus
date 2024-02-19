#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, greaternumber, position;
    double vet[10];

    cout << "How many numbers do you to type? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Enter one number: ";
        cin >> vet[i];
    }

    greaternumber = vet[i];
    for (i = 0; i < N; i++) {
        if (vet[i] > greaternumber) {
            greaternumber = vet[i];
            position = i;
        }
    }

    cout << endl;
    cout << fixed << setprecision(2);
    cout << "GREATER VALUE = " << greaternumber << endl;
    cout << "POSITION OF THE GREATER VALUE = " << position << endl;

    return 0;
}
