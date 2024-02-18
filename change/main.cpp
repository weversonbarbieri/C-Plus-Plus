#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int quantity;
    double price, money, change, totalpruchased;

    cout << "Product price: ";
    cin >> price;
    cout << "Quantity purchased: ";
    cin >> quantity;
    cout << "Money received: ";
    cin >> money;

    totalpruchased = quantity * price;
    change = money - totalpruchased;

    cout << fixed << setprecision (2);
    cout << "Change = " << change << endl;



    return 0;
}
