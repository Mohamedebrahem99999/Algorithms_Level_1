#include <iostream>

void readNumbers(float Numbers[3])
{   
    std::cout << "Enter the furst number\n";
    std::cin >> Numbers[0];
    std::cout << "Enter the second number\n";
    std::cin >> Numbers[1];
    std::cout << "Enter the third number\n";
    std::cin >> Numbers[2];
}

float sumOfThreeNumbers (float Numbers[3])
{
    return Numbers[0] + Numbers[1] + Numbers[2];
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
    float Nums[3];
    readNumbers(Nums);
    printAverag(averageOfThreeNumbers(sumOfThreeNumbers(Nums)));
}