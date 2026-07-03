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
    int FactorialResutl = 1;
    for (int i = Number; i > 0; i--)
    {
        FactorialResutl *=i;
    }
    return FactorialResutl;
}

int main()
{
    std::cout << Factorial(readPositiveNumber("Enter a Positive Number\n"));
    return 0;
}