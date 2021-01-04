#include <iostream>
#include <string>
using namespace std;

int main()
{
    // STRING TYPE
    string name;

    string first;
    string initial;
    string second;
    string last;
    string space = " ";
    string dot = ".";
    string fullName;

    // Input data for first time, intial, and last time
    cout << "Enter the first name: ";
    cin >> first;
    cout << "Enter the inital: ";
    cin >> initial;
    cout << "Enter the last name: ";
    cin >> last;

    // Formulation of full name using concatenation operator
    fullName = first + space + initial + dot + space + last;
    cout << "The full name is: " << fullName << endl;
    return 0;
}