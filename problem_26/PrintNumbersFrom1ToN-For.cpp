#include <iostream>

int readNumber()
{
    int Number;
    std::cout << "Enter the End\n";
    std::cin >> Number;
    return Number;
}
void printNumbers(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    printNumbers(readNumber());
}