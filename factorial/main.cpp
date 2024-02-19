#include <iostream>

using namespace std;

int main()
{
    int i, N, factorial = 1;

    cout << "Enter N value: ";
    cin >> N;

    for (i = 1; i < N + 1; i++) {
        if (N == 0 && N == 1) {
            factorial = 1;
        } else {
            factorial = factorial * i;
        }
    }

    cout << "FACTORIAL = " << factorial << endl;


    return 0;
}
