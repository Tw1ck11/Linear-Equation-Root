// Корень линейного уравнения.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float a, b, x;

    cout << "This program calculates the root of the linear equation.\nThe linear equation has the form 'ax + b = 0'.\nEnter coefficients a and b:" << endl;

    cout << "Coefficient a = ";
    cin >> a;

    cout << "Coefficient b = ";
    cin >> b;

    x = -b / a;
    cout << "x = " << x << endl;
}