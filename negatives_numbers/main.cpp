#include <iostream>

using namespace std;

int main()
{
    int i, N, numbers;
    int vet[10];

    cout << "How many numbers do want to type? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Enter a number: ";
        cin >> vet[i];
    }

    cout << "NEGATIVE NUMBERS" << endl;

    for (i = 0; i < N; i++) {
        if (vet[i] < 0) {
            cout << vet[i] << endl;
        }
    }




    return 0;
}
