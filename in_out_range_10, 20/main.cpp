#include <iostream>

using namespace std;

int main()
{
    int N, i, x, sumin, sumout;

    cout << "How many numbers are you going to enter? ";
    cin >> N;

    sumin = 0;
    sumout = 0;
    for (i = 0; i < N; i++) {
        cout << "Enter one number: ";
        cin >> x;
        if (x >= 10 && x <= 20) {
            sumin = sumin + 1;
        } else {
            sumout = sumout + 1;
        }


    }

    cout << sumin << " BETWEEN 10 - 20 RANGE" << endl;
    cout << sumout << " OUT OF RANGE 10 - 20" << endl;
    return 0;
}
