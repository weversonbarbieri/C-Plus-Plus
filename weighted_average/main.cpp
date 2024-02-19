#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N;
    double a, b, c, sum, average;

    cout << "Enter the number of cases you want to type: ";
    cin >> N;

    cout << fixed << setprecision(2);
    for (i = 0; i < N; i++) {
        cout << "Enter 3 numbers:" << endl;
        cin >> a;
        cin >> b;
        cin >> c;
        average = ((a * 2) + (b * 3) + (c * 5)) / 10;
        cout << "AVERAGE = " << average << endl;

    }



    return 0;
}
