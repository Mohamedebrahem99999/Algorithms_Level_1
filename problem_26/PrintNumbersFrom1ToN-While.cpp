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
    int i = 1;
    while (i <= Number)
    {
        std::cout << i << std::endl;
        i++;
    }
}

int main()
{
    printNumbers(readNumber());
}