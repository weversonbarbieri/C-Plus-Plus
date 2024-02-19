#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, N, sum;
    int matrix[10][10];

    cout << "Which is the matrix order? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "MAIN DIAGONAL:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {

        }
        cout << matrix[i][i] << " ";
    }

    cout << endl;
    sum = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] < 0) {
                sum = sum + 1;
            }
        }
    }

    cout << "QUANTITY OF NEGATIVE NUMBERS = " << sum << endl;




    return 0;
}
