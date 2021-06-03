#include <cstdio>
#include <iostream>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // Get N (number of elements)
    int n;
    std::cin >> n;

    // Assign values to array index
    int v[n];
    for (int i = 0; i < n; i++)
        std::cin >> v[i];

    // reverse loop
    int z[n]; // New reversed array
    for (int i = 0; i < n; i++)
        z[i] = v[n - (i + 1)];

    for (int i = 0; i < n; i++)
        std::cout << z[i] << " ";
    return 0;
}
