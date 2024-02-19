#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum, number, quantity;
    double average;

    sum = 0;
    quantity = 0;
    cout << "Enter the numbers: " << endl;
    cin >> number;

    cout << fixed << setprecision(2);
    if (number < 0) {
        cout << "IMPOSSIBLE TO CALCULATE"<< endl;
    } else {
        while (number > 0) {
        quantity = quantity + 1;
        sum = sum + number;
        cin >> number;
    }
    average = (double) sum / quantity;
    cout << "Average = " << average << endl;
    }











    return 0;
}
