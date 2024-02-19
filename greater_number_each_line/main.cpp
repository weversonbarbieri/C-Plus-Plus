#include <iostream>

using namespace std;

int main()
{
    int N, i, j, greaternumber;
    int matrix[10][10];

    cout << "Which is the matrix's order? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "GREATER NUMBER OF EACH LINE:" << endl;

    for (i = 0; i < N; i++) {
        greaternumber = 0;
        for (j = 0; j < N; j++) {
            if (matrix[i][j] > greaternumber) {
                greaternumber = matrix[i][j];
            }
        }
        cout << greaternumber << endl;
    }





    return 0;
}
