#include <iostream>

int main()
{

    // integer

    int x = 10;
    int y = 30;

    std::cout << x + y << "\n";

    // double

    double price = 10.99;
    double temperature = 32.05;

    std::cout << price << "\n";
    std::cout << temperature << "\n";

    // single character

    char grade = 'A';
    char initial = 'B';

    std::cout << grade << std::endl;

    // boolean (true or false)

    bool activate = true;
    bool power = false;

    // String (objects that reresents a sequence of text) note: use double quotes

    std::string name = "Djalma Xavier";
    std::string food = "hamburguer";

    std::cout << name << " loves " << food;

    // We can declare more than one variable of the same type

    int one = 1, two = 2, three = 3;

    return 0;
}