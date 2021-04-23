#include <iostream>
using namespace std;

int main(void)
{
    // INTEGER TYPE
    // Sizes of integers: short int, int, long int
    unsigned short first;
    short second;
    unsigned int third;
    int fourth;
    unsigned long fifth;
    long int six;

    // Defining constants
    const unsigned int penny = 1;
    const unsigned int nickel = 5;
    const unsigned int dime = 10;
    const unsigned int quarter = 25;
    const unsigned int dollar = 100;

    // Defining varaibles (number of each coin)
    unsigned int num_pennies;
    unsigned int num_nickels;
    unsigned int num_dimes;
    unsigned int num_quarters;
    unsigned int num_dollars;

    // Defining total value
    unsigned long totalValue;

    // Inputting number of different coins
    cout << "Number of Pennies: ";
    cin >> num_pennies;
    cout << "Number of Nickels: ";
    cin >> num_nickels;
    cout << "Number of Dimes: ";
    cin >> num_dimes;
    cout << "Number of quarters: ";
    cin >> num_quarters;
    cout << "Number of Dollars: ";
    cin >> num_dollars;

    // Calculating total value
    totalValue = num_pennies * penny + num_nickels * nickel + num_dimes * dime +
                 num_quarters * quarter + num_dollars * dollar;
    
    cout << "Total value is: " << totalValue << " Pennies.\n";
    return 0;
}