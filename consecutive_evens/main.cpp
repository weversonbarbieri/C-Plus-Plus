#include <iostream>

using namespace std;

int main()
{
    int x, sum;

    cout << "Enter an integer number: ";
    cin >> x;

    while (x != 0) {
        if (x % 2 == 0) {
            sum = x + (x + 2) + (x + 4) + (x + 6) + (x + 8);
        } else {
            sum = (x + 1) + (x + 3) + (x + 5) + (x + 7) + (11 + 9);
        }
        cout << "SUM = " << sum << endl;
        cout << "Enter an integer number: ";
        cin >> x;
    }





    return 0;
}
