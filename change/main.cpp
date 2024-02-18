#include <bits/stdc++.h>

using namespace std;

int main()
{
    int quantity;
    double price, change, money, total, missing;

    cout << "Product price: ";
    cin >> price;
    cout << "Quantity purchased: ";
    cin >> quantity;
    cout << "Money received: ";
    cin >> money;

    total = quantity * price;

    cout << fixed << setprecision(2);
    if (money < total) {
       missing = total - money;
       cout << "Not enough money. Missing " << missing << " reais" << endl;
    } else {
       change = money - total;
       cout << "Change = " << change << endl;
    }






    return 0;
}
