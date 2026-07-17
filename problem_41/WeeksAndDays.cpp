#include <iostream>

const int HOURSPERDAY = 24;
const int DAYSPERWEEK = 7;


int readPositiveNumber(std::string Message)
{
    int Number;
    do{
        std::cout << Message;
        std::cin >> Number;
    }while(Number <= 0);
    return Number;
}

int calcNumberOfWeeks(int Hours)
{
    return Hours/HOURSPERDAY/DAYSPERWEEK;
}

int calcNumberOfDays(int Hours)
{
    return Hours/HOURSPERDAY;
}

int calcRemainingHours(int Weeks, int Days, int Hours)
{
    return Hours -Weeks*DAYSPERWEEK*HOURSPERDAY - Days*HOURSPERDAY;
}

void printNumberOfWeeks(int Weeks)
{
    std::cout << "Total Number of Weeks = " << Weeks << "\n";
}

void printNumberOfDays(int Days)
{
    std::cout << "Total Number of Days = " << Days << "\n";
}

void printNumberOfRemainingHours(int RemainingHours)
{
    std::cout << "Total Number of Remaining Hours = " << RemainingHours << "\n";
}

int main()
{
    int Hours = readPositiveNumber("Enter the number of hours\n");
    int Weeks = calcNumberOfWeeks(Hours);
    int Days = calcNumberOfDays(Hours - Weeks*DAYSPERWEEK*HOURSPERDAY);
    int RemainingHours = calcRemainingHours(Weeks,Days,Hours);
    printNumberOfWeeks(Weeks);
    printNumberOfDays(Days);
    printNumberOfRemainingHours(RemainingHours);
}