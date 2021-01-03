#include <iostream>
using namespace std;

int main(void)
{
   // VARIABLES
   int num1, num2, sum; // variable declarations of type int

   // Get input from user
   cout << "Enter the first Number: ";
   cin >> num1; // Assign input value to num1

   cout << "Enter the second Number: ";
   cin >> num2;

   // Find sum of both values
   sum = num1 + num2;
   cout << "The sum is: " << sum;

   /* 
   cin >> x;        Get a value from user and store in variable x
   cout << x;       Get the value of var x and output to console
   cout << 4;       Output the value 4 to the console
   cin >> 4;        Error. The cin object needs a variable, not a value
   */

   // CONSTANTS
   const double Pi = 3.14159; // Constant definition
   /* 
   Pi = x           Error, the value of Pi cannot be changed
   cin >> Pi;       Error, Pi cannot receive a value 
   cout << Pi;      The value of Pi can be shown on the monitor
   x = Pi;          The value of Pi can be stored in another variable    
   */

   return 0;
}
