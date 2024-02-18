#include <bits/stdc++.h>

using namespace std;

int main()
{
    int distance;
    double fuelspent, averagefuel;

    cout << "Distance: ";
    cin >> distance;
    cout << "Fuel spent: ";
    cin >> fuelspent;

    averagefuel = distance / fuelspent;

    cout << fixed << setprecision(3);
    cout << "Average fuel spent = " << averagefuel << endl;




    return 0;
}
