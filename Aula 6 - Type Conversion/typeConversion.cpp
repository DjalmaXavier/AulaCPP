#include <iostream>

using std::cout;

int main()
{

    /* type conversion = conversion a value of one data type to another
        We have two types of conversion -

        Implicit = automatic
        Explicit = Precede value with new data type
    */

    // Implicit

    int x = 3.14;

    // Explicit

    double y = (int)3.14;

    cout << y << "\n";

    cout << (char)100 << "\n";

    // Example of use

    int correct = 8;
    int questions = 10;

    double score = (double)correct / questions * 100;

    cout << score << "%";

    return 0;
}