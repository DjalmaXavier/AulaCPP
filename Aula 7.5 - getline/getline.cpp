#include <iostream>
#include <sstream>

using std::cin;
using std::cout;
using std::string;
using std::ws;

int main()
{
    // Another thing about getline is the order: if we put getline after one std::cin, the std::cin will leave the newline character in the buffer.
    string name;
    string word;
    int age;

    cout << "Welcome to my app! Type a anything to configure the keyboard!\n";
    cin >> word;
    cout << "Nice! Now, what's your name?\nMy name is: ";
    // if we just use the std::getline(std::cin, name), we will see a blank character in the app. To prevent that, we use:
    std::getline(cin >> ws, name);
    cout << "Hello " + name + ". now, what is your age?\nAge: ";
    cin >> age;
    cout << "Wonderful " + name + "! You have " << age << " years!";
    return 0;
}