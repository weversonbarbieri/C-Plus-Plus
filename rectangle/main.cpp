#include <bits/stdc++.h>

using namespace std;

int main()
{
    double base, height, area, perimeter, diagonal;

    cout << "Enter the rectangle's base: ";
    cin >> base;
    cout << "Enter the rectangle's height: ";
    cin >> height;

    area = base * height;
    perimeter = 2 * (base + height);
    diagonal = sqrt (pow(base, 2) + pow(height, 2));

    cout << fixed << setprecision(4);
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    cout << "Diagnonal = " << diagonal << endl;

    return 0;
}
