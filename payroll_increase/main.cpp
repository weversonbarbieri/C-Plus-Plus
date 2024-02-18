#include <bits/stdc++.h>

using namespace std;

int main()
{
    double salary, newsalary, increaserate;
    int percentage;

    cout << "Enter the employee salary: ";
    cin >> salary;

    cout << fixed << setprecision(2);
    if (salary <= 1000) {
        newsalary = (salary * 0.20) + salary;
        increaserate = newsalary - salary;
        percentage = 20;
        cout << "New salary = R$ " << newsalary << endl;
        cout << "Increase rate = R$ " << increaserate << endl;
        cout << "Percentage = " << percentage << " %" << endl;
    } else if (salary > 1000 && salary <= 3000) {
        newsalary = (salary * 0.15) + salary;
        increaserate = newsalary - salary;
        percentage = 15;
        cout << "New salary = R$ " << newsalary << endl;
        cout << "Increase rate = R$ " << increaserate << endl;
        cout << "Percentage = " << percentage << " %" << endl;
    } else if (salary > 3000 && salary <= 8000) {
        newsalary = (salary * 0.10) + salary;
        increaserate = newsalary - salary;
        percentage = 10;
        cout << "New salary = R$ " << newsalary << endl;
        cout << "Increase rate = R$ " << increaserate << endl;
        cout << "Percentage = " << percentage << " %" << endl;
    } else {
        newsalary = (salary * 0.05) + salary;
        increaserate = newsalary - salary;
        percentage = 5;
        cout << "New salary = R$ " << newsalary << endl;
        cout << "Increase rate = R$ " << increaserate << endl;
        cout << "Percentage = " << percentage << " %" << endl;
    }




    return 0;
}
