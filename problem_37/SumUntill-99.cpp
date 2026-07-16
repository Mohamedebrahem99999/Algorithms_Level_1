#include <iostream>
#include <string>

int readNumber(std::string message)
{
    int Number;
    std::cout << message;
    std::cin >> Number;
    return Number;
}

int getSum()
{
    int Sum = 0;
    int Number;
    int counter = 1;
    while (true)
    {
        Number = readNumber("Enter number " + std::to_string(counter) + "\n");
        if (Number == -99)
            break;
        Sum += Number;
        counter++;
    }
    return Sum;
}

void printSum(int Sum)
{
    std::cout << "The sum is " << Sum << "\n";
}

int main()
{
   printSum(getSum());
}