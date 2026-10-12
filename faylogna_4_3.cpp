#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double sideA, sideB, angleC;
    double angleRadians, sideC;

    cout << "Enter side A: ";
    cin >> sideA;

    cout << "Enter side B: ";
    cin >> sideB;

    cout << "Enter angle C in degrees: ";
    cin >> angleC;

    angleRadians = angleC * 3.141592653589793 / 180;

    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2)
                 - 2 * sideA * sideB * cos(angleRadians));

    cout << fixed << setprecision(2);
    cout << "Side C is: " << sideC << endl;

    return 0;
}