#include <bits/stdc++.h>

using namespace std;

int main()
{
    double totalprice;
    int code, quantity;

    cout << "Enter the product code: ";
    cin >> code;
    cout << "Quantity purchased: ";
    cin >> quantity;

    cout << fixed << setprecision(2);
    if (code == 1) {
        totalprice = quantity * 5.00;
        cout << "Dued value: " << totalprice << endl;
    } else if (code == 2) {
        totalprice = quantity * 3.50;
        cout << "Dued value: " << totalprice << endl;
    } else if (code == 3) {
        totalprice = quantity * 4.80;
        cout << "Dued value: R$ " << totalprice << endl;
    } else if (code == 4) {
        totalprice = quantity * 8.90;
        cout << "Dued value: R$ " << totalprice << endl;
    } else if (code == 5) {
        totalprice = quantity * 7.32;
        cout << "Dued value: R$ " << totalprice << endl;
    }



    return 0;
}
