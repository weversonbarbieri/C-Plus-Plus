#include <bits/stdc++.h>

using namespace std;

int main()
{
    double width, length, Pm2, area, price;

    cout << "Enter the width area: ";
    cin >> width;
    cout << "Enter the length area: ";
    cin >> length;
    cout << "Enter the per M2: ";
    cin >> Pm2;

    area = width * length;
    price = area * Pm2;

    cout << fixed << setprecision(2);
    cout << "Area = " << area << endl;
    cout << "Price area = " << price << endl;


    return 0;
}
