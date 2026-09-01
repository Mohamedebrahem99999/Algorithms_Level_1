#include <iostream>

const int SECONDSPERMINUTE = 60;
const int MINUTESPERHOUR = 60;
const int HOURSPERDAY = 24;

struct stTaskDuration
{
    int Days, Hours, Minutes, Seconds;
};

int readPositiveNumber(std::string Message)
{
    int Number;
    do
    {
        std::cout << Message;
        std::cin >> Number;
    } while (Number <= 0);
    return Number;
}

stTaskDuration fillTaskDuration(int Seconds)
{
    stTaskDuration TaskDuration;
    TaskDuration.Days = Seconds / (HOURSPERDAY * MINUTESPERHOUR * SECONDSPERMINUTE);
    Seconds -= TaskDuration.Days * (HOURSPERDAY * MINUTESPERHOUR * SECONDSPERMINUTE);
    TaskDuration.Hours = Seconds / (SECONDSPERMINUTE * MINUTESPERHOUR);
    Seconds -= TaskDuration.Hours * (MINUTESPERHOUR * SECONDSPERMINUTE);
    TaskDuration.Minutes = Seconds / (SECONDSPERMINUTE);
    Seconds -= TaskDuration.Minutes * (SECONDSPERMINUTE);
    TaskDuration.Seconds = Seconds;
    return TaskDuration;
}

void printDurationDetails(stTaskDuration TaskDuration)
{
    std::cout << "Total Number Of Days = " << TaskDuration.Days << "\n";
    std::cout << "Total Number Of Hours = " << TaskDuration.Hours << "\n";
    std::cout << "Total Number Of Minutes = " << TaskDuration.Minutes << "\n";
    std::cout << "Total Number Of Seconds = " << TaskDuration.Seconds << "\n";
}

int main()
{
    int NumberOfSeconds = readPositiveNumber("Enter the number of seconds: ");
    stTaskDuration TaskDuration = fillTaskDuration(NumberOfSeconds);
    printDurationDetails(TaskDuration);
}