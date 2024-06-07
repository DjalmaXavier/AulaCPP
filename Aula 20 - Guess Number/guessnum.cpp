#include <iostream>
#include <ctime>

using std::cin;
using std::cout;

int main()
{
    srand(time(NULL));

    int num, guess, tries = 1;

    num = rand() % 10 + 1;

    cout << "-=-=-=-=-=-= Guess Game -=-=-=-=-=-=\n";
    cout << "Try guessing the number to win the game!\n";

    do
    {
        cout << "Number (1-10): ";
        cin >> guess;

        if (guess > num)
        {
            cout << "Too high!\n";
            tries++;
        }
        else if (guess < num)
        {
            cout << "Too low\n";
            tries++;
        }
        else
        {
            cout << "Congratulations!! You got it! Tries: " << tries << "\n";
        }
    } while (guess != num);

    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";

    return 0;
}