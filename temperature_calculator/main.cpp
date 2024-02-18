#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    double celsius, fahrenheit;
    char temp;

    cout << "Enter the temperature initial (F = Fahrenheit / C = Celsius): ";
    cin >> temp;


    cout << fixed << setprecision(2);
    if (temp == 'F') {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        cout << "The equivalent temperature in Celsius is: " << celsius << endl;
    } else if (temp == 'C'){
        cout << "Enter the temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = celsius * 1.8 + 32.0;
        cout << "The equivalent temperature in Fahrenheit is: " << fahrenheit << endl;
    }


   return 0;
}
