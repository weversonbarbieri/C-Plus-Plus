#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, i, profit10, profit1020, profit20;
    double percent, sumprofit, sumpurchased, sumsold;
    string product[10];
    double purchasedprice[10], soldprice[10], profit[10];

    cout << "Enter the number products will be typed: ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Product " << i + 1 << "." << endl;
        cout << "Name: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, product[i]);
        cout << "Purchased price: ";
        cin >> purchasedprice[i];
        cout << "Sold price: ";
        cin >> soldprice[i];
    }

    cout << fixed << setprecision(2);

    profit10 = 0;
    profit1020 = 0;
    profit20 = 0;
    sumprofit = 0;
    sumpurchased = 0;
    sumsold = 0;
    for (i = 0; i < N; i++) {
        profit[i] = soldprice[i] - purchasedprice[i];
        percent = (profit[i] * 100) / soldprice[i];
        if (percent < 10) {
            profit10 = profit10 + 1;
        } else if (percent >= 10 && percent <= 20) {
            profit1020 = profit1020 + 1;
        } else {
            profit20 = profit20 + 1;
        }
    }

    for (i = 0; i < N; i++) {
        sumprofit = sumprofit + profit[i];
        sumpurchased = sumpurchased + purchasedprice[i];
        sumsold = sumsold + soldprice[i];
    }

    cout << endl;
    cout << "REPORT:";
    cout << "Profit < 10%: " << profit10 << endl;
    cout << "Profit between 10% and 20%: " << profit1020 << endl;
    cout << "Profit > 20%: " << profit20 << endl;
    cout << "Total amount purchased: " << sumpurchased << endl;
    cout << "Total amount sold: " << sumsold << endl;
    cout << "Total amount profit: " << sumprofit << endl;

    return 0;
}
