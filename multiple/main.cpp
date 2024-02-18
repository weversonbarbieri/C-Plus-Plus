#include <iostream>

using namespace std;

int main()
{
    int a, b, change;

    cout << "Enter 2 integer numbers: " << endl;
    cin >> a;
    cin >> b;

    if (a % b == 0 || b % a == 0) {
        cout << "The 2 integer numbers are multiples" << endl;
    } else {
        cout << "The 2 integer numbers ARE NOT multiples" << endl;
    }



    return 0;
}
