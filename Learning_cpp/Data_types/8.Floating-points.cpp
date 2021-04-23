#include <iostream>
using namespace std;

int main(void)
{
    // FLOATING-POINT TYPE
    // Sizes of floats: float, double, long double

    // The default size of a float literal is 'double'

    const double Pi = 3.14159;
    double radius;
    double perimeter;
    double area;

    // Prompt user for input
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate perimeter and area and store them in variables
    perimeter = 2 * Pi * radius; // 2 is used as a constant literal
    area = Pi * Pi * radius;

    // Outputing the value of radius, perimeter, and area
    cout << "The radius is: " << radius << endl;
    cout << "The perimeter is: " << perimeter << endl;
    cout << "The area is: " << area;
    return 0;
}
