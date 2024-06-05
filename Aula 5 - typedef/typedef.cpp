#include <iostream>
#include <vector>

// typedef = reserved keyword used to create an additional name (alias) for another data type

typedef std::vector<std::pair<std::string, int>> pairList_t;

typedef std::string text_t;

// using is like the same, but you can use "using" for templates;

using number_t = int;
using std::cout;

int main()
{
    pairList_t pairList;

    text_t name = "Djalma";

    number_t age = 25;

    cout << "My name is " + name + ", and i have " << age << " years";

    return 0;
}