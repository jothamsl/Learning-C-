#include <cstdio>
#include <iostream>

int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;

    std::string values[9] = { "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine" };

    int s = (b - a) + 2;
    int num[s];
    num[0] = a;
    for (int i = 1; i < s; i++)
        num[i] = a + i;
    for (int i = 0; i < ((b - a) + 1); i++)
        if (num[i] >= 1 && num[i] <= 9)
            std::cout << values[num[i] - 1] << std::endl;
        else if (num[i] > 9 && (num[i] % 2) == 0)
            std::cout << "even\n";
        else if (num[i] > 9 && (num[i] % 2) == 1)
            std::cout << "odd\n";
    return 0;
}
