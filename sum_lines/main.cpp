#include <iostream>

using namespace std;

int main()
{
    int i, M, j, N;
    double matrix[10][10];
    double sum[10];

    cout << "How many lines does the matrix have? ";
    cin >> N;
    cout << "How many columns does the matrix have? ";
    cin >> M;

    for (i = 0; i < N; i++) {
        cout << "Enter the elements of the " << i + 1 << "a line:" << endl;
        for (j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "VECTOR GENERATED:" << endl;
    sum[i] = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
        sum[i] = sum[i] + matrix[i][j];
      }
    cout << sum[i] << endl;
    }

    return 0;
}
