#include <cmath>
#include <iostream>
#include <string>

int readNumber(std::string prompt)
{
    int Number;
    std::cout << prompt;
    std::cin >> Number;
    return Number;
}

void power234OfNumber(int Number)
{
    int result1 = Number*Number;
    int result2 = Number*Number*Number;
    int result3 = Number*Number*Number*Number;
    std::cout << result1 << std::endl;
    std::cout << result2 << std::endl;
    std::cout << result3 << std::endl;
}


int main()
{
    power234OfNumber(readNumber("Enter a Number\n"));
}