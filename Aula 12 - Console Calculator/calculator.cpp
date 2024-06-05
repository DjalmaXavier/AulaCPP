#include <iostream>

using std::cin;
using std::cout;

int main()
{
    char op;
    double n1, n2, result;

    cout << "=-=-=-=-=-=-=-=Calculator 1.0=-=-=-=-=-=-=-=\nType the operator (+, -, *, /): ";
    cin >> op;
    cout << "\nEnter the first number: ";
    cin >> n1;
    cout << "\nEnter the second number: ";
    cin >> n2;

    switch (op)
    {
        // Single quotes, because its a char
    case '+':
        result = n1 + n2;
        cout << "\nResult =  " << result;
        break;
    case '-':
        result = n1 - n2;
        cout << "\nResult =  " << result;
        break;
    case '*':
        result = n1 * n2;
        cout << "\nResult =  " << result;
        break;
    case '/':
        result = n1 / n2;
        cout << "\nResult =  " << result;
        break;
    default:
        cout << "\nUse a valid operator to get the result.";
        break;
    }

    return 0;
}