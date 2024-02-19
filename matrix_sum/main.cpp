#include <iostream>

using namespace std;

int main()
{
    int N, i, M, j;
    int matrixA[10][10], matrixB[10][10], matrixC[10][10];

    cout << "How many lines will be typed? ";
    cin >> N;
    cout << "How many columns will be typed? ";
    cin >> M;

    cout << "Enter the values of matrix A:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter the values of matrix B:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> matrixB[i][j];
        }
    }

    cout << "SUM MATRIX:" << endl;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }





    return 0;
}
