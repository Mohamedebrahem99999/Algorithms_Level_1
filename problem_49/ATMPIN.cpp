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
        }
        else
            return Number;
    }
}

void resetScreen()
{
    system("color 07");
}

void showBalance(bool login)
{
    if (login)
    {
        system("color A0");
        std::cout << "Correct PIN\n";
        std::cout << "Your Balance is " << 7500 << "\n";
    }
    else
    {
        system("color 40");
        std::cout << "Wrong PIN\n";
    }
}

bool loginSucceed()
{
    return readNumber("Enter the PIN: ") == PIN;
}

int main()
{
    while (true)
    {
        bool Login = loginSucceed();
        showBalance(Login);
        if (Login)
            break;
    }
    // resetScreen();
}