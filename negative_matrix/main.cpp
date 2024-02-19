#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, j, M;
    int matrix[10][10];

    cout << "How many lines will be typed? ";
    cin >> N;
    cout << "How many columns will be typed? ";
    cin >> M;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "NEGATIVE VALUES:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matrix[i][j] < 0) {
                cout << matrix[i][j] << endl;
            }
        }
    }



    return 0;
}
