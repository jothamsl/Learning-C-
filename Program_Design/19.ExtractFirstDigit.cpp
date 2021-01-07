#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
    unsigned int givenInt, firstDigit;

    // Prompt & Input 
    cout << "Enter a positive integer: ";
    cin >> givenInt;

    // Processing
    firstDigit = givenInt % 10;

    // Output 
    cout << "Entered integer: " << givenInt << endl;
    cout << "First Digit: " << firstDigit << endl;
    return 0;
}
