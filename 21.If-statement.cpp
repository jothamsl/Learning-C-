#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // The if statement uses an expression to test a condition. If the result
    // of the test is true; it skeps the statement (or the set of statements)
    // if the result is false

    // Declaration
    int number;

    // Get input
    cout << "Enter an value: ";
    cin >> number;

    // Finding the absolute value
    if (number < 0)
    {
        number = -number;
    }

    // Printing the absolute value
    cout << "Absolute value of the number you entered is: " << number << endl;

    // Gross payment of employee

    // Declaration
    double hours, rate, regularPay, overPay, totalPay;

    // Input
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter pay rate: ";
    cin >> rate;

    // Calculation that doesn't depend on decision
    regularPay = hours * rate;
    overPay = 0.0;

    // Calculation that is skipped if hours worked is not more than 40
    if (hours > 40.0)
    {
        overPay = (hours - 40.0) * rate * 0.30;
    } // End if

    // Rest of the calculation
    totalPay = regularPay + overPay;

    // Printing output
    cout << fixed << showpoint;
    cout << "Regular pay = " << setprecision (2) << regularPay << endl;
    cout << "Over time pay = " << setprecision (2) << overPay << endl;
    cout << "Total pay = " << setprecision (2) << totalPay << endl;
    return 0;

}
