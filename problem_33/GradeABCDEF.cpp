#include <iostream>

enum enGrades {A, B, C, D, E, F};

int readNumberInRange(int To, int From)
{
    int Number;
    do{
        std::cout << "Enter your grade [0 - 100]\n";
        std::cin >> Number;
    }while(Number < To || Number > From);
    return Number;
}

enGrades getGrade(int Grade)
{
    if(Grade > 90)
        return enGrades::A;
    else if(Grade > 80)
        return enGrades::B;
    else if(Grade > 70)
        return enGrades::C;
    else if(Grade > 60)
        return enGrades::D;
    else if(Grade > 50)
        return enGrades::E;
    else
        return enGrades::F;
}

std::string getStrGrade(enGrades Grade)
{
    return (Grade == enGrades::A?"A":Grade == enGrades::B?"B":Grade == enGrades::C?"C":Grade == enGrades::D?"D":Grade == enGrades::E?"E":"F");
}

void printGrade(std::string Grade)
{
    std::cout << "Your grade is " << Grade << "\n";
}

int main()
{
    printGrade(getStrGrade(getGrade(readNumberInRange(0,100))));
}