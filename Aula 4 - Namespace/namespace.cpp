#include <iostream>

// Namespace = provides a solution for preventin name conflicts in large projects.

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace first;

    std::cout << x + second::x;

    return 0;
}