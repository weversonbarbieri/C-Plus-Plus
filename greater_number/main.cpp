#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter 3 numbers: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;


    cout << fixed << setprecision(2);
    if (b < a && a > c) {
        cout << "Greater number = " << a << endl;
    } else if (a < b && b > c) {
        cout << "Greater number = " << b << endl;
    } else {
        cout << "Greater number = " << c << endl;
    }



    return 0;
}
