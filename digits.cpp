#include <iostream>
using namespace std;

int main()
{
    int number, hundreds, tens, ones;
    cout << "Enter a 3-digit number:";
    cin >> number;

    hundreds = number / 100;
    number = number % 100;

    tens = number / 10;
    ones = number % 10;

    cout << "Hundreds digit: " << hundreds << endl;
    cout << "Tens digit: " << tens << endl;
    cout << "Ones digit: " << ones << endl;

    return 0;
}

