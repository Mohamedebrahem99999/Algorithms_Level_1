#include <iostream>

struct numbers
{
    int numberOne, numberTwo, numberThree;
};

numbers readNumbres()
{
    numbers nums;
    std::cout << "Enter the furst number\n";
    std::cin >> nums.numberOne;
    std::cout << "Enter the second number\n";
    std::cin >> nums.numberTwo;
    std::cout << "Enter the third number\n";
    std::cin >> nums.numberThree;
    return nums;
}

int sumNumbers(numbers nums)
{
    return nums.numberOne + nums.numberTwo + nums.numberThree;
}
int main()
{
    int Num1, Num2, Num3;
    std::cout << sumNumbers(readNumbres());
}