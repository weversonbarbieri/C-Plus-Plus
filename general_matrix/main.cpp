#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, j;
    double matrix[10][10];
    double sum;

    cout << "Enter the matrix's order: ";
    cin >> N;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> matrix[i][j];
        }
    }


    sum = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] > 0) {
                sum = sum + matrix[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << endl;
    cout << "SUM OF POSITIVE NUMBERS: " << sum << endl;
    cout << endl;

    cout << "Choose one line: ";
    cin >> i;
    cout << "CHOSEN LINE: ";
    for (j = 0; j < N; j++) {
        cout << matrix[i][j] << " ";
    }

    cout << endl;
    cout << endl;
    cout << "Choose one column: ";
    cin >> j;
    cout << "CHOSEN COLUMN: ";
    for (i = 0; i < N; i++) {
        cout << matrix[i][j] << " ";
    }

    cout << endl;
    cout << endl;
    cout << "MAIN DIAGONAL: ";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {

        }
        cout << matrix[i][i] << " ";
    }

    cout << endl;
    cout << endl;
    cout << "ALTERED MATRIX: " << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] < 0) {
                matrix[i][j] = matrix[i][j] * matrix[i][j];
                cout << matrix[i][j] << " ";
            } else {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
