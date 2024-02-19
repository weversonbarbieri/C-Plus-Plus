#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter the coordinates X and Y:" << endl;
    cin >> x;
    cin >> y;

    while (x != 0 && y != 0) {
        if (x > 0 && y > 0) {
            cout << "QUADRANT Q1" << endl;
            cout << "Enter the coordinates X and Y:" << endl;
            cin >> x;
            cin >> y;
        } else if (x < 0 && y > 0) {
            cout << "QUADRANT Q2" << endl;
            cout << "Enter the coordinates X and Y:" << endl;
            cin >> x;
            cin >> y;
        } else if (x < 0 && y < 0) {
            cout << "QUADRANT Q3" << endl;
            cout << "Enter the coordinates X and Y:" << endl;
            cin >> x;
            cin >> y;
        } else if (x > 0 && y < 0) {
            cout << "QUADRANT Q4" << endl;
            cout << "Enter the coordinates X and Y:" << endl;
            cin >> x;
            cin >> y;
        }

    }


    return 0;
}
