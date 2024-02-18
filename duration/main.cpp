#include <bits/stdc++.h>

using namespace std;

int main()
{
    int seconds, secondsI, totalseconds, hour, totalminutes;
    double secondsD, minutesD, percseconds, percminutes;

    cout << "Enter the dutation in seconds: ";
    cin >> seconds;
    secondsI = seconds / 60;
    secondsD = seconds / 60.0;
    percseconds = secondsD - secondsI;
    totalseconds = percseconds * 60;

    hour = secondsI / 60;
    minutesD = secondsI / 60.0;
    percminutes = minutesD - hour;
    totalminutes = percminutes * 60;

    cout << fixed << setprecision(2);
    cout << hour << ":" << totalminutes << ":" << totalseconds << endl;
    //cout << totalminutes << endl;


    return 0;
}
