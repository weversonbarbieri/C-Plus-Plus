#include <bits/stdc++.h>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double PI = 3.14519, area, radius;

    cout << "Enter the radius' circle: ";
    cin >> radius;

    area = PI * pow(radius, 2);

    cout << fixed << setprecision(3);

    cout << "AREA = " << area << endl;


    return 0;
}
