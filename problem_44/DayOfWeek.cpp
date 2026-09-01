#include <iostream>

enum enYearMonths
{
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednsday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
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

std::string getYearMonth(enYearMonths WeekDay)
{
    std::string WeekDays[] = {"Sunday", "Monday", "Tuesday", "Wednsday", "Thursday", "Friday", "Saturday"};
    return WeekDays[WeekDay - 1];
}

int main()
{
    std::string WeekDayStr = getYearMonth((enYearMonths)readNumberInRange(7, 1, "Enter a number corresponding to a Week Day: "));
    std::cout << WeekDayStr << "\n";
}