#include <iostream>

enum enOddOrEven {Odd, Even};

int readNumber()
{
    int Number;
    std::cout << "Enter the End\n";
    std::cin >> Number;
    return Number;
}

enOddOrEven isOdd(int Number)
{
    return (Number %2 != 0 ? enOddOrEven::Odd :enOddOrEven::Even);
}

int SumOfOddNums(int End)
{
    int Sum = 0;
    int i = 1;
    while (i <= End)
    {    
        Sum+=(isOdd(i) == enOddOrEven::Even?i:0);
        i++;
    }
    return Sum;
}

void printSum(int Sum)
{
    std::cout << "The total Sum of the numbers is " << Sum << std::endl;
}

int main()
{
    printSum(SumOfOddNums(readNumber()));
}