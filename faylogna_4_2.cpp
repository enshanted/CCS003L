#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string payRoll, employeeID, employeeName;
    double monthlySalary, lateMinutes;

    const double PHILHEALTH = 1000.00;
    const double PAG_IBIG = 800.00;
    const double SSS = 1200.00;
    const double TAX_RATE = 0.12;

    cout << "Enter payroll period: ";
    getline(cin, payRoll);

    cout << "Enter employee ID: ";
    getline(cin, employeeID);

    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter monthly salary: ";
    cin >> monthlySalary;

    cout << "Enter late and absence minutes: ";
    cin >> lateMinutes;

    double hourlyRate = monthlySalary / 30 / 8;
    double lateDeduc = (lateMinutes / 60) * hourlyRate;
    double tax = monthlySalary * TAX_RATE;
    double totalDeductions =
        lateDeduc + PHILHEALTH + PAG_IBIG + SSS + tax;
    double netPay = monthlySalary - totalDeductions;

    cout << fixed << setprecision(2);

    cout << "\nFEU - Institute of Technology\n\n";
    cout << "Employee ID: " << employeeID
         << "\t\tPayroll Period: " << payRoll << endl;
    cout << "Employee Name: " << employeeName << "\n\n";

    cout << left << setw(38) << "INCOME" << "DEDUCTIONS\n";
    cout << left << setw(23) << "Monthly Salary"
         << "Php " << right << setw(10) << monthlySalary
         << "     Lates and absences (" << lateDeduc << ")\n";

    cout << left << setw(38) << ""
         << "Philhealth             (" << PHILHEALTH << ")\n";
    cout << left << setw(38) << ""
         << "Pag-ibig               (" << PAG_IBIG << ")\n";
    cout << left << setw(38) << ""
         << "SSS                    (" << SSS << ")\n";
    cout << left << setw(38) << ""
         << "Withholding tax        (" << tax << ")\n\n";

    cout << "Total Earnings: Php " << monthlySalary << endl;
    cout << "Total Deductions: Php " << totalDeductions << endl;
    cout << "Net Pay: Php " << netPay << endl;

    return 0;
}