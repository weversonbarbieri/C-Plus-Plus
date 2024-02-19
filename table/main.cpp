#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, i, total;

    cout << "The table will be in which value? ";
    cin >> x;

    for (i = 1; i < 11; i++) {
        total = x * i;
        cout << x << " x " << i << " = " << total << endl;
    }



    return 0;
}
