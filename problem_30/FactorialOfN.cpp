#include <iostream>


int readPositiveNumber(std::string Message)
{
    int Number;
    do{
        std::cout << Message;
        std::cin >> Number;
    }while(Number <= 0);
    return Number;
}

int Factorial (int Number)
{
    if (Number > 0)
        return Number*Factorial(Number-1);
    return 1;
}

int main()
{
    std::cout << Factorial(readPositiveNumber("Enter a Positive Number\n"));
    return 0;
}