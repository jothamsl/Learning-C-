#include <iostream>
using namespace std;

int main(void)
{
    // CHAR TYPE
    char first;
    char second;

    // CHARACTER LITTERALS
    // There are 2 types of charaacter litterals

    // Alphabet characters defined in the ASCII table
    // integer value of the characters defined in ASCII table

    // Character literals are always enclosed by single quotes
    first = 'A';
    second = 65;
    char third = 'B';
    char fourth = 66;

    // Print values
    cout << "value of first: " << first << endl;
    cout << "value of first: " << second << endl;
    cout << "value of first: " << third << endl;
    cout << "value of first: " << fourth << endl;

    // ESCAPE CHARACTERS
    /*
    \n      New lines (line feed)
    \t      Tab 
    \b      Backspace 
    \r      Carriage return 
    \f      Form feed 
    \'      Single quote
    \"      Double quote 
    \\      Backslash
    */

    cout << "HEllo\n";
    cout << "Hi\t friends." << endl;
    cout << "Buenos dia \bamigos." << endl; // two space after dias
    cout << "Hello\rBonjour mes amis." << endl;
    cout << "This is a single quote\'." << endl;
    cout << "This is a double quote\"." << endl;
    cout << "This is how to print a backslash \\.";
    return 0;
}