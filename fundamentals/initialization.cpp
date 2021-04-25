#include <iostream>
#include <vector>
#include <complex>
using namespace std;

int main()
{
    double d1 = 2.5;   // initialize d1 to 2.5
    double d2 {2.45};  // initialize d2 to 2.45
    double d3 = {2.4}; // initialize d3 to 2.4 (the = is optional with {})

    complex<double> z = 1; // initialize a complex number with double-precision float scalars
    complex<double> z2 {d1, d2};
    complex<double> z3 = {d1, d2}; // the = is optional with {}

    vector <int> v {1, 2, 3, 4, 5};

    /* Using {} instead of =, saves you from conversions that lose information */
    int i1 = 7.8; // i1 becomes 7
    int i2 {7.8}; // error: floating-point to integer conversion

    /*
     * There is no need to state a variable's type explicitly when it can be deduced
     * from the initializer
     */

    auto b = true; // bool
    auto ch = 'x'; // char
    auto i = 4;    // int
    auto d = 4.2;  // double
    auto k = sqrt(25); // whatever is returned from sqrt();
    auto bb {true};    // bool
}
