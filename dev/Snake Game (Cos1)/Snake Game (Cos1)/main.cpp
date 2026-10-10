#include <iostream>

void displayMainMenu()
{
    std::cout << "+---------------------------+\n";
    std::cout << "|                           |\n";
    std::cout << "|      The Snake Game       |\n";
    std::cout << "|                           |\n";
    std::cout << "+---------------------------+\n";
    std::cout << "|  1. Play Game             |\n";
    std::cout << "|  2. Customize             |\n";
    std::cout << "|  3. Score                 |\n";
    std::cout << "|  4. Exit                  |\n";
    std::cout << "+---------------------------+\n";
}

void displaySnakeSelection()
{
    std::cout << "\n";
    std::cout << "+---------------------------+\n";
    std::cout << "|       Choose Your Snake   |\n";
    std::cout << "+---------------------------+\n";
    std::cout << "|  1. Red Snake             |\n";
    std::cout << "|  2. Blue Snake            |\n";
    std::cout << "|  3. Green Snake           |\n";
    std::cout << "|  4. Yellow Snake          |\n";
    std::cout << "+---------------------------+\n";
}

int main()
{
    int menuChoice;

    displayMainMenu();
    std::cout << "Enter an option: ";

    if (!(std::cin >> menuChoice))
    {
        return 0;
    }

    switch (menuChoice)
    {
    case 1:
        displaySnakeSelection();
        break;
    case 2:
    case 3:
        std::cout << "That option is not available yet.\n";
        break;
    case 4:
        std::cout << "Goodbye!\n";
        break;
    default:
        std::cout << "Invalid option.\n";
        break;
    }

    return 0;
}