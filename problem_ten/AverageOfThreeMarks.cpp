#include <iostream>

void readNumbers(float &Num1, float &Num2,float &Num3)
{   
    std::cout << "Enter the furst number\n";
    std::cin >> Num1;
    std::cout << "Enter the second number\n";
    std::cin >> Num2;
    std::cout << "Enter the third number\n";
    std::cin >> Num3;
}

float sumOfThreeNumbers (float Num1 ,float Num2, float Num3)
{
    return Num1 + Num2 + Num3;
}

float averageOfThreeNumbers(float Sum)
{
    float Average = Sum /3;
    return Average;
}
void printAverag(float Average){
    std::cout <<"The Average of the three numbers is :" << Average << std::endl;
}


int main ()
{
    float Num1, Num2, Num3;
    readNumbers(Num1,Num2,Num3);
    printAverag(averageOfThreeNumbers(sumOfThreeNumbers(Num1,Num2,Num3)));
}