#include <iostream>
#include <sstream>
// cout << (insertion operator)
// cin >> (extraction operator) note: if  you hit "space", the cin stop reading the string. For that, use std::getline(std::cin, name);

using std::cin;
using std::cout;
using std::string;

int main()
{
    string name;
    int age;

    cout << "What's your name?\nMy name is: ";
    std::getline(std::cin, name);
    cout << "Hello " + name + ". now, what is your age?\nAge: ";
    cin >> age;
    cout << "Wonderful " + name + "! You have " << age << " years!";

    return 0;
}