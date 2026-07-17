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
    do{
        std::cout << Message;
        std::cin >> Number;
    }while(Number <= 0);
    return Number;
}

stTaskDuration fillTaskDuration()
{
    stTaskDuration TaskDuration;
    TaskDuration.Days = readPositiveNumber("Enter the number of days\n");
    TaskDuration.Hours = readPositiveNumber("Enter the number of Hours\n");
    TaskDuration.Minutes = readPositiveNumber("Enter the number of Minutes\n");
    TaskDuration.Seconds = readPositiveNumber("Enter the number of Seconds\n");
    return TaskDuration;
}

int DaysToSeconds(int Days)
{
    return Days*HOURSPERDAY*MINUTESPERHOUR*SECONDSPERMINUTE;
}

int HoursToSeconds(int Hours)
{
    return Hours*MINUTESPERHOUR*SECONDSPERMINUTE;
}

int MinutesToSeconds(int Minutes)
{
    return Minutes*SECONDSPERMINUTE;
}

int calcTotalNumberOfSeconds(stTaskDuration TaskDuration)
{
    return DaysToSeconds(TaskDuration.Days) 
    + HoursToSeconds(TaskDuration.Hours)
    + MinutesToSeconds(TaskDuration.Minutes)
    +TaskDuration.Seconds;
}

void printTotalDurationInSeconds(int TotalDurationInSeconds)
{
    std::cout << "The Total Duration in Seconds = " << TotalDurationInSeconds << "\n";
}

int main()
{
    stTaskDuration TaskDuration = fillTaskDuration();
    int TotalDurationInSeconds = calcTotalNumberOfSeconds(TaskDuration);
    printTotalDurationInSeconds(TotalDurationInSeconds);
}