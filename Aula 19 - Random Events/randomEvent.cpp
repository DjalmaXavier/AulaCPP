#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You don't found nothing!";
        break;
    case 2:
        std::cout << "You found a potion of health!";
        break;
    case 3:
        std::cout << "You found a potion of mana!";
        break;
    case 4:
        std::cout << "You found a potion of stamina!";
        break;
    case 5:
        std::cout << "You received a multi-potion!";
        break;
    }

    return 0;
}