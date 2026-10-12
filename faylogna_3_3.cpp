#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "\nSum: " << n1 + n2 << endl;
    cout << "Difference: " << n1 - n2 << endl;
    cout << "Product: " << n1 * n2 << endl;

    if (n2 != 0) {
        cout << "Remainder: " << n1 % n2 << endl;
        cout << "Quotient: " << fixed << setprecision(2)
             << (float) n1 / n2 << endl;
    } else {
        cout << "Remainder and quotient cannot be calculated because the second number is zero." << endl;
    }

    return 0;
}