#include <iostream>

void printAllLetters()
{
    for (char i = 65; i < (65 + 26); i++)
        std::cout << i << "\n";
}

int main()
{
    printAllLetters();
}