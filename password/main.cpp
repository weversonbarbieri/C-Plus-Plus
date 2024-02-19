#include <iostream>

using namespace std;

int main()
{
    int password;

    cout << "Enter the password: ";
    cin >> password;

    while (password != 2002) {
        cout << "Password not valid! Try again: ";
        cin >> password;
    }

    cout << "Access granted!" << endl;




    return 0;
}
