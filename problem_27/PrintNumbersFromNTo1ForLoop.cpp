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
    for (int i = Number; i >= 1; i--)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    printNumbers(readNumber());
}