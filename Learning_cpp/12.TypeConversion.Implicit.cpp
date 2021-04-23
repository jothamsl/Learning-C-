#include <iostream>
#include <typeinfo>
using namespace std;

int main(void) 
{
    // TYPE CONVERSION
    // C++ provides a tool to test the type of any expression

    // typeid (expression).name()
    
    // The tool returns an abbreviation of the type (i for int, d for double and so on)
    // To use the tool, include the <typeinfo> header file.
    
    // IMPLICIT TYPE PROMOTION 
    
    // Declarations 
    bool x = true;
    char y = 'A';
    short z = 14;
    float t = 24.5;

    // Type conversion from bool to int 
    cout << true << endl;
    cout << "Type of x + 100: " << typeid (x+100).name() << endl;
    cout << "Value of x + 100 " << x + 100 << endl;
    
    // Type conversion from char to int 
    cout << "Type of y + 1000: " << typeid (y + 1000).name() << endl;
    cout << "value of y + 1000: " << y + 1000 << endl;

    // Type conversion from short to int 
    cout << "Type of z * 100: " << typeid (z * 10).name() << endl;
    cout << "Value of z * 100: " << z * 100 << endl;

    // Type conversion from float to double 
    cout << "Type of t + 15000.2: " << typeid (t + 15000.2).name() << endl;
    cout << "Value of t + 15000.2: " << t + 15000.2 << endl;

    // IMPLICIT TYPE CONVERSION 

    // Declarations 
    int a = 123;
    long b = 140;
    double d = 114.56; 

    // Check the type and value of expression x + y 
    cout << "Type of a + b: " << typeid (a + b).name() << endl; 
    cout << "Value of a + b: " << a + b << endl; 
    

    // IMPLICIT TYPE CONVERSION OF EXPRESSION OF MIXED TYPES 
    
    // declarations 
    int r;
    double u; 

    // Assignment 
    r = 23.67;
    u = 130; 

    // Checking type and value of t 
    cout << "Type of r = 23.67: " << typeid (r = 23.67).name() << endl;
    cout << "Value of r after assignment: " << r << endl << endl;

    // Checking type and value of u 
    cout << "Type of u = 130: " << typeid (u = 130).name() << endl; 
    cout << "Value of u after assingment: " << u << endl;

}
