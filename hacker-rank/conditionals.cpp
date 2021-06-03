#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::string names[9] = { "one", "two", "three", "four", "five", "six",
        "seven", "eight", "nine" };
    if (n >= 1 && n <= 9)
        std::cout << names[n - 1] << std::endl;
    else if (n > 9)
        std::cout << "Greater than 9\n";
    return 0;
}
