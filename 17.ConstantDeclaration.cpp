#include <iostream>
using namespace std;

// CONSTANT DECLARATION
    // --------------------
    /* To define a constant:
       1. Use the keyword 'const' in front of the type.
       2. Initialize a constant when it is declared.
       3. It is customary to use uppercase letters to name a constant
          to distinguish it from variables
       4. Constants are normally declared in the global area of the program (before any 
          function, including main()), Which makes them visible to all functions.
    */

const int FOOT_TO_INCH = 12;
const double TAX_RATE = 8.2;
const double PI = 3.1415926;

int main() {
   cout << FOOT_TO_INCH << endl; 
}
