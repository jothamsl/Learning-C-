#include <iostream>
#include <limits> // To find max & min value capable for storage on system
using namespace std;

int main()
{
    // OVERFLOW & UNDERFLOW

    // IN UNSIGNED INTEGERS

    // Find the maximum and minimum of an integer
    unsigned int num1 = numeric_limits<unsigned int>::max();
    unsigned int num2 = numeric_limits<unsigned int>::min();

    // Print the maximum and minimum values
    cout << "The value of maximum unsigned int: " << num1 << endl;
    cout << "The value of minimum unsigned int: " << num2 << endl;

    // Force the integers to overflow
    num1++;
    num2--;

    // Print the overflowed values
    cout << "The value of num1 + 1 after overflow: " << num1 << endl;
    cout << "The value of num2 - 1 after underflow: " << num2 << endl;

    // IN SIGNED INTEGERS

    int val1 = numeric_limits<int>::max();
    int val2 = numeric_limits<int>::min();

    // Print the maximum and minimum values
    cout << "The value of maximum int: " << val1 << endl;
    cout << "The value of minimum int: " << val2 << endl;

    // Force the integers to overflow
    val1++;
    val2--;

    // Print the overflowed values
    cout << "The value of val1 + 1 afer overflow: " << val1 << endl;
    cout << " The value of val2 - 1 after overflow: " << val2 << endl;

    // IN FLOATING-POINT VALUES
    double float1 = numeric_limits<double>::max();
    double float2 = numeric_limits<double>::min();

    // Print the maximum and minimum values
    cout << "The value of maximum double: " << float1 << endl;
    cout << "The value of minimum double: " << float2 << endl;

    // Multiply the values by 1000.00
    val1++;
    val2--;

    // Print the overflowed values
    cout << "The value of float1 * 1000 afer overflow: " << float1 << endl;
    cout << " The value of float2 * 1000 after overflow: " << float2 << endl;
    return 0;
}
