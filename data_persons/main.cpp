#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, N, sumM;
    double averageW, sum, sumW, greaterH, lowerH;
    double heights[10];
    char genre[10];

    cout << "How many persons will be typed? ";
    cin >> N;


    for (i = 0; i < N; i++) {
        cout << "Height of the " << i + 1 << "a person: ";
        cin >> heights[i];
        cout << "Genre of the " << i + 1 << "a person: ";
        cin >> genre[i];
    }

    greaterH = heights[0];
    lowerH = heights[0];
    for (i = 0; i < N; i++) {
         if (heights[i] > greaterH) {
            greaterH = heights[i];
    } else if (heights[i] < lowerH) {
           lowerH = heights[i];
        }

    }

    sumW = 0;
    sumM = 0;
    for (i = 0; i < N; i++) {
        if (genre[i] == 'F') {
            sum = sum + heights[i];
            sumW = sumW + 1;
        } else {
            sumM = sumM + 1;
        }
    }

    cout << fixed << setprecision(2);
    averageW = sum / sumW;
    cout << "Greater height = " << greaterH << endl;
    cout << "Lower height = " << lowerH << endl;
    cout << "Average of the heights from the women: " << averageW << endl;
    cout << "Number of men = " << sumM << endl;

    return 0;
}
