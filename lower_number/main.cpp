#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter the 2nd number: ";
    cin >> b;
    cout << "Enter the 3rd number: ";
    cin >> c;

    if (a > b && b < c) {
        cout << "Lower number = " << b << endl;
    } else if (a > c && c < a) {
        cout << "Lower number = " << c << endl;
    } else {
        cout << "Lower number = " << a << endl;
    }



    return 0;
}
