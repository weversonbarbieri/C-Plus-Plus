#include <iostream>

using namespace std;

int main()
{
    int starttime, endtime, totalhours;

    cout << "Enter the start time: ";
    cin >> starttime;
    cout << "Enter the end time: ";
    cin >> endtime;

    if (starttime > 12 && endtime < 12) {
        totalhours = (24 - starttime) + endtime;
        cout << "THE GAME LASTED " << totalhours << " HOURS" << endl;
    } else if (starttime < 12 && endtime > 12) {
        totalhours = (12 - starttime) + (endtime - 12);
        cout << "THE GAME LASTED " << totalhours << " HOURS" << endl;
    } else if (starttime < 12 && endtime < 12) {
        totalhours = (12 - starttime) + (12 + endtime);
        cout << "THE GAME LASTED " << totalhours << " HOURS" << endl;
    } else if (starttime > 12 && endtime > 12) {
        totalhours = (24 - starttime) +(endtime - 12) + 12;
        cout << "THE GAME LASTED " << totalhours << " HOURS" << endl;
    } else {
        totalhours = (12 - starttime) + (12 - endtime);
        cout << "THE GAME LASTED " << totalhours << " HOURS" << endl;
    }



    return 0;
}
