#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int main()
{
    double a, b, r;

    cout << "Hypotenuse calculator\nEnter a number for side A: ";
    cin >> a;
    cout << "Enter a second number for side B: ";
    cin >> b;

    r = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The hypotenuse is = " << r;

    return 0;
}
