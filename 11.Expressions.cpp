#include <iostream>
using namespace std;

int main(void) {
    // EXPRESSIONS

    // Literal Expressions
    cout << false << " " << 'A' << " " << "Hello" << endl;
    cout << 2341 << " " << 12897234L << endl;
    return 0;

    // Parenthetical Expressions
    int x = 2;
    cout << "Value with parentheses: " << (x + 3) * 5 << endl;
    cout << "Value without parentheses: " << x + 3 * 5 << endl << endl;
}
