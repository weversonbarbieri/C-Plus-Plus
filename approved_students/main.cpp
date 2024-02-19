#include <iostream>

using namespace std;

int main()
{
    int N, i, position;
    double gradeA[10], gradeB[10], finalgrade[10];
    string names[10];

    cout << "How many students will be typed? ";
    cin >> N;

    for (i = 0; i < N; i++) {
        cout << "Enter name, 1st grade and 2nd grade from the " << i + 1 << "o student: " << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, names[i]);
        cin >> gradeA[i];
        cin >> gradeB[i];
    }

    for (i = 0; i < N; i++) {
        finalgrade[i] = (gradeA [i]+ gradeB[i]) / 2;
    }

    cout << "Students approved:" << endl;
    for (i = 0; i < N; i++) {
        if (finalgrade[i] >= 6) {
            position = i;
            cout << names[position] << endl;
        }
    }



    return 0;
}
