#include <iostream>

using namespace std;

int main()
{
    int x, i;

    cout << "Enter X value: ";
    cin >> x;

    for (i = 1; i < x; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }



    return 0;
}
