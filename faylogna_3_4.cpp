#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double peso;
    double dollar;

    cout << "Enter Philippine peso: ";
    cin >> peso;

    dollar = peso / 43.33089;

    cout << fixed;
    cout << "\nThe amount's equivalent to:" << endl;

    cout << "US Dollar: " << setprecision(3) << dollar << endl;
    cout << "Euro: " << setprecision(6) << dollar * 0.734719 << endl;
    cout << "Yuan: " << dollar * 6.346934 << endl;
    cout << "Koruna: " << dollar * 18.77263 << endl;
    cout << "Krone: " << dollar * 5.449007 << endl;
    cout << "Sheqel: " << dollar * 3.726334 << endl;
    cout << "Dinar: " << dollar * 0.274588 << endl;

    return 0;
}