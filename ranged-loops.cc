#include <iostream> 

int main()
{ 
    float x[] = {1, 4e5, 6.5f, 12};
    for (auto v : x)
    {
        std::cout << v << std::endl;
    }
}
