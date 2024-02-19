#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter 2 numbers: " << endl;
    cin >> x;
    cin >> y;

    while (x != y) {
        if (x > y) {
            cout << "DECREASING!" << endl;
        } else {
            cout << "INCREASING!" << endl;
        }
        cout << "Enter more 2 numbers: " << endl;
        cin >> x;
        cin >> y;

    }



    return 0;
}
