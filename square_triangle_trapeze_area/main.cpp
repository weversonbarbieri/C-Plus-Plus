#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{

    double a, b, c, square, triangle, trapeze;

    cout << "Enter A value: ";
    cin >> a;
    cout << "Enter B value: ";
    cin >> b;
    cout << "Enter C value: ";
    cin >> c;

    square = pow(a, 2);
    triangle = (a * b) / 2;
    trapeze = ((a + b) * c) / 2;

    cout << fixed << setprecision(4);
    cout << "Square area = " << square << endl;
    cout << "Triangle area = " << triangle << endl;
    cout << "Trapeze area = " << trapeze << endl;

     //quadrado = pow (A, 2)
     // area triangulo retangulo = base (a) * altura (b) / 2
     // trapezio = ((A + B) * C) / 2
    return 0;
}
