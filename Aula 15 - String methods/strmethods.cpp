#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.empty())
    {
        std::cout << "You didn't enter your name!\n";
    }

    if (name.length() > 12)
    {
        std::cout << "Your name has more than 12 letters";
    }
    else if (name.length() <= 4)
    {
        std::cout << "Your name has less than 5 letters";
    }
    else
    {
        std::cout << "Your name has " << name.length() << " letters";
    }

    // name.clear() cleans a string
    name.append("\n@gmail.com"); // join a string in the end of the string
    // name.at(0) discover the letter in index 0
    // name.insert(0, "@") insert the @ in the index 0 from the name string
    // name.find(' '); discover if the string has a space(the first encounter)
    // name.erase(0, 3) delete the first 3 characters from the string

    std::cout << name;

    return 0;
}