#include <iostream>
#include <random>

int main()
{
    int number = 2;
    number % 2 == 1 ? std::cout << number << " is ODD " : std::cout << number << " is EVEN";

    return 0;
}