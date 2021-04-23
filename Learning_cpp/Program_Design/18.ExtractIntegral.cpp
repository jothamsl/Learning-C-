#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {

    // Variable Declaration and assignment
    double value;
    int intPart;
    double fractPart;
    cout << "Float value: " << endl;
    cin >> value;

    // Process
    intPart = static_cast <int> (value);
    fractPart = value - intPart;

    // Output 
    cout << fixed << showpoint << setprecision (2);
    cout << "Original Number: " << value << endl;
    cout << "Integral part: " << intPart << endl;
    cout << "Fractional part:" << fractPart << endl;
}
