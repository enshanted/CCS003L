#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double sideA, sideB, hypotenuse;

    cout << "Enter side A: ";
    cin >> sideA;

    cout << "Enter side B: ";
    cin >> sideB;

    hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));

    cout << fixed << setprecision(2);
    cout << "The hypotenuse is: " << hypotenuse << endl;

    return 0;
}