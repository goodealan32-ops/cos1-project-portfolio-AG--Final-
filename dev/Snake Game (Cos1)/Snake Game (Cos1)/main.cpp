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

int main()
{
    displayMainMenu();
    return 0;
}