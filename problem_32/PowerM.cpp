#include <iostream>
#include <string>

int readNumber(std::string prompt)
{
    int Number;
    std::cout << prompt;
    std::cin >> Number;
    return Number;
}

int powerOfNumber(int Number, int Power)
{
    if (Power == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 0; i < Power;i++)
    {
        result *= Number;
    }
    return result;
}

void printPowerOfNumbers(int Number)
{
    std::cout << "Result = " << Number << "\n";
}

int main()
{
    printPowerOfNumbers(powerOfNumber(readNumber("Enter a Number\n"),readNumber("Enter a Power\n")));
}