#include <iostream>

int main()
{
    // pseudo-random = not truly random

    srand(time(NULL));

    int num = rand() % 2 + 1;

    std::cout << num;

    return 0;
}