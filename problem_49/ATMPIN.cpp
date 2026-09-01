#include <iostream>
#include <limits>

const int PIN = 1234;

int readNumber(std::string Message = "Enter a number: ")
{
    int Number;

    while (true)
    {
        std::cout << Message;
        std::cin >> Number;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid Entry, Enter a valid one\n";
            std::cin >> Number;
        }
        else
            return Number;
    }
}

int readNumberInRange(int PIN, std::string Message = "")
{
    int Number;
    while (true)
    {
        Number = readNumber(Message);
        if (Number == PIN)
        {
            system("color A0");
            std::cout << "Correct PIN\n";
            std::cout << "Your Balance is " << 7500 << "\n";
            return Number;
        }
        system("color 40");
        std::cout << "Wrong PIN\n";
    }
}

int main()
{
    int UserInput = readNumberInRange(PIN, "Enter the PIN: ");
}