#include <iostream>

// We can use "using namespace std", but it is too risk because of the large entities the std has. So, its best to use "using std::{whatever i want to use}"

int main()
{
    using std::cout;
    using std::string;

    string name = "Djalma";

    cout << "My name is " + name;

    return 0;
}