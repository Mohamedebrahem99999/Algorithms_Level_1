#include <iostream>
#include <string>

int readPositiveNumber(std::string Message)
{
    int Number;
    do{
        std::cout << Message;
        std::cin >> Number;
    }while(Number <= 0);
    return Number;
}

bool isPrime(int Number)
{
    if (Number < 2)
        return false;
    for(int i = 2; i*i <= Number; i++)
    {
        if(Number%i == 0)
            return false;
    }
    return true;
}

void printResult(bool isPrime)
{
    if(isPrime)
        std::cout << "The number you entered is prime\n";
    else
        std::cout << "The number you entered is not prime\n";
}

int main()
{
    printResult(isPrime(readPositiveNumber("Enter a Positive Number\n")));
}