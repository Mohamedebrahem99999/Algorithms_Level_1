#include <iostream>

int readNumber()
{
    int Number;
    std::cout << "Enter the Start\n";
    std::cin >> Number;
    return Number;
}
void printNumbers(int Number)
{
    int i = Number;
    while (i >= 1)
    {
        std::cout << i << std::endl;
        i--;
    }
}

int main()
{
    printNumbers(readNumber());
}