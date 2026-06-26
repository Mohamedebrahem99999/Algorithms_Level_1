#include <iostream>

void readNumbers(float &mark1, float &mark2,float &mark3)
{   
    std::cout << "Enter the first mark\n";
    std::cin >> mark1;
    std::cout << "Enter the second mark\n";
    std::cin >> mark2;
    std::cout << "Enter the third mark\n";
    std::cin >> mark3;
}

float sumOfThreeNumbers (float mark1 ,float mark2, float mark3)
{
    return mark1 + mark2 + mark3;
}

float averageOfThreeNumbers(float Sum)
{
    float Average = Sum /3;
    return Average;
}
void printAverag(float Average){
    std::cout <<"The Average of the three numbers is :" << Average << std::endl;
}

bool isPass(float Average)
{
    return Average >= 50;
}

void printStat(bool isPass)
{
    std::cout << (isPass? "You have passed\n":"You have failed\n");
}

int main ()
{
    float mark1, mark2, mark3;
    readNumbers(mark1,mark2,mark3);
    float Average = averageOfThreeNumbers(sumOfThreeNumbers(mark1,mark2,mark3));
    printAverag(Average);
    printStat(isPass(Average));
}