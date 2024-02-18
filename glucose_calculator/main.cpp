#include <iostream>

using namespace std;

int main()
{
    double glucose;

    cout << "Enter the glucose measured: ";
    cin >> glucose;

    if (glucose <= 100) {
        cout << "Classification: normal" << endl;
    } else if (glucose > 100 && glucose <= 140) {
        cout << "Classication: high glucose" << endl;
    } else {
        cout << "Classication: diabites" << endl;
    }




    return 0;
}
