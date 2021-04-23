#include <iostream>
using namespace std;

int main(void) {
    // EXPRESSIONS

    // Literal Expressions
    cout << false << " " << 'A' << " " << "Hello" << endl;
    cout << 2341 << " " << 12897234L << endl;

    // Parenthetical Expressions
    int x = 2;
    cout << "Value with parentheses: " << (x + 3) * 5 << endl;
    cout << "Value without parentheses: " << x + 3 * 5 << endl;

    // Sizeof expression
    // There are two versions of this operator: 

    // 1. One that finds the size of an expression 
    // sizeof expression;

    cout << sizeof x + 2;

    // 2. Another which finds the size of a type 
    // sizeof(type)

    cout << sizeof(int); // size of int is 8 bits

    // Basic Arithmetic Expressions
    cout << 3 + 2 << endl;
    cout << 10 - 2 << endl;
    cout << 3 * 7 << endl;
    cout << 16 / 3 << endl;
    cout << 25 % 2 << endl;

    // Compound Assignments 
    int y = 20;
    int t = 53;
    int j = 92;

    // use compound assignments
    y += 31; // y = y + 31
    j -= 4;  // j = j - 4 
    t *= 7;  // t = t * 7
    y /= 5;  // y = y / 5
    j %= 7;  // j = j % 7
    return 0;
}
