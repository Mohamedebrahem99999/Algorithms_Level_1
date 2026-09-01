#include <iostream>
#include <limits>

int readPositiveNumber(std::string Message = "Enter a Positive Number: ")
{
    int Number;
    while (true)
    {
        std::cout << Message;
        std::cin >> Number;
        if (Number > 0)
            return Number;
        std::cout << "Number Entered out of range\n";
    }
}

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

int readNumberInRange(int To, int From, std::string Message = "")
{
    if (Message == "")
        Message = "Enter A number between[" + std::to_string(From) + "] and [" + std::to_string(To) + "]: ";
    int Number;
    while (true)
    {
        Number = readNumber(Message);
        if (Number <= To && Number >= From)
            return Number;
    }
}

float getNumberOfMonths(int LoanAmount, int MonthlyPayment)
{
    return (float)LoanAmount / MonthlyPayment;
}

int main()
{
    int LoanAmount = readPositiveNumber("Enter the Monthly Loan Amount: ");
    int MonthlyPayment = readNumberInRange(LoanAmount, 1, "Enter the Monthly Loan Amount: ");
    std::cout << getNumberOfMonths(LoanAmount, MonthlyPayment) << "\n";
}