#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // DATA FORMATTING USING MANIPULATORS

    // ?MANIPULATORS FOR OUTPUT

    // BOOL ALPHA MANIPULATOR
    // Declarations
    bool x = true;
    bool y = false;

    // Testing values without manipulators
    cout << "Value of x using default: " << x << endl;
    cout << "Value of y using default: " << y << endl;

    // Testing values using manipulators
    cout << "Value of x using manipulator: " << boolalpha << x << endl;
    cout << "Value of y: " << y << endl
         << endl;

    // BASE OF INTEGER MANIPULATOR
    int a = 1237;

    // Outputting a in three bases without showbase
    cout << "a in decimal: " << a << endl;
    cout << "a in octal: " << oct << a << endl;
    cout << "a in hexedecimal: " << hex << a << endl
         << endl;

    // Outputting a in three bases with showbase
    cout << "a in decimal: " << a << endl;
    cout << "a in octal: " << showbase << oct << a << endl;
    cout << "a in hexedecimal: " << showbase << hex << a << endl;

    // FLOATING-POINT MANIPULATORS
    double b = 1237;
    double o = 12376745.5623;

    // Using fixed (default) and showpoint manipulator
    cout << "b in fixed_point format: " << b << endl;
    cout << "b in fixed_point format: " << showpoint << o << endl;

    // Using scientific manipulator
    cout << "o in scientific format: " << o << scientific << endl << endl;

    // MANIPULATORS WITH ARGUMENTS
    double v = 1237234.1235;

    // Applying common formats
    cout << fixed << setprecision(2) << showpos << setfill('*');

    // Printing v in three formats
    cout << setw(15) << left << v << endl;
    cout << setw(15) << internal << v << endl;
    cout << setw(15) << right << x << endl << endl;

    // MANIPULATORS FOR INPUT 

    // INPUT FOR BOOLEAN VALUES 
    bool flag;

    // Input value using manipulator 
    cout << "Enter true or false for flag: ";
    cin >> boolalpha >> flag; 

    // Output value 
    cout << flag << endl << endl;

    // INPUT INTEGER IN ANY BASE 
    int num1, num2, num3;
    
    // Input first number in decimal (no manipulator)
    cout << "Enter the first number in decimal: ";
    cin >> num1; 

    // Input second number in octal 
    cout << "Enter the second number in octal: ";
    cin >> oct >> num2;

    // Input Third number in Hexedecimal 
    cout << "Enter the third number in hexedecimal: ";
    cin >> hex >> num3; 

    // Output values
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl << endl;
    return 0;
}