#include <iostream>

using namespace std;

int main()
{
    int N, i, x;

    cout << "How many numbers are you going to enter? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Enter one number: ";
        cin >> x;
        if (x % 2 == 0 && x > 0) {
            cout << "EVEN POSITIVE" << endl;
        } else if (x % 2 == 0 && x < 0) {
            cout << "EVEN NEGATIVE" << endl;
        } else if (x % 2 != 0 && x > 0) {
            cout << "ODD POSITIVE" << endl;
        } else if (x % 2 != 0 && x < 0) {
            cout << "ODD NEGATIVE" << endl;
        } else {
            cout << "NULL" << endl;
        }
    }




    return 0;
}
