#include <iostream>

int readNumber()
{
    int Number;
    std::cout << "Enter a number\n";
    std::cin >> Number;
    return Number;
}

double getHalf( int Number)
{
    return (float)Number/2;
}

void printHalfNumber(int Num)
{
    std::cout << "Half of " << Num << " = " << getHalf(Num) << "\n";
}
int main()
{
    printHalfNumber(readNumber());
}