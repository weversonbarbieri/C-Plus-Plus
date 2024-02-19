#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, quantity, sumR, sumM, sumF, sum;
    double rabbits, mouses, frogs;
    char animal;

    sumR = 0;
    sumM = 0;
    sumF = 0;
    sum = 0;
    cout << "How many tests do you want to enter? ";
    cin >> N;

    cout << fixed << setprecision(2);
    for (i = 0; i < N; i++) {
        cout << "Enter the quantity of tested animals: ";
        cin >> quantity;
        cout << "Animal type: ";
        cin >> animal;
        if (animal == 'R') {
            sumR = sumR + quantity;
        } else if (animal == 'M') {
            sumM = sumM + quantity;
        } else {
            sumF = sumF + quantity;
        }
        sum = sum + quantity;
    }

        rabbits = (sumR * 100.0) / sum;
        mouses = (sumM * 100.0) / sum;
        frogs = (sumF * 100.0) / sum;

        cout << endl;
        cout << "REPORT: " << endl;
        cout << "Total: " << sum << " animals" << endl;
        cout << "Total of rabbits: " << sumR << endl;
        cout << "Total of mouses: " << sumM << endl;
        cout << "Total of frogs: " << sumF << endl;
        cout << "Percentage of rabbits: " << rabbits << endl;
        cout << "Percentage of mouses: " << mouses << endl;
        cout << "Percentage of frogs: " << frogs << endl;



    return 0;
}
