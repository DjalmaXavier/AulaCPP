#include <iostream>

int main()
{
    int age;

    std::cout
        << "Enter your age:  ";
    std::cin >> age;

    if (age > 18)
    {
        std::cout << "Welcome!";
    }
    else if (0 >= age)
    {
        std::cout << "You haven't born?";
    }
    else
    {
        std::cout << "You're not old enough";
    }

    return 0;
}