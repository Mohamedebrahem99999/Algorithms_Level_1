#include <iostream>
#include <limits>

enum enYearMonths
{
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    Octuber = 10,
    November = 11,
    December = 12
};

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

std::string getYearMonth(enYearMonths YearMonth)
{
    std::string YearMonthsStr[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Octuber", "November", "December"};
    return YearMonthsStr[YearMonth - 1];
}

int main()
{
    std::string YearMonthStr = getYearMonth((enYearMonths)readNumberInRange(12, 1, "Enter a number corresponding to a Year Month: "));
    std::cout << YearMonthStr << "\n";
}