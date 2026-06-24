#include <iostream>

void readNumbres(int &Num1, int  &Num2, int &Num3 )
{
    std::cout << "Enter the furst number\n";
    std::cin >> Num1;
    std::cout << "Enter the second number\n";
    std::cin >> Num2;
    std::cout << "Enter the third number\n";
    std::cin >> Num3;
}

int SumOfThreeNumbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void PrintResult(int Total)
{
    std::cout << "The Total sum of numbers is: " << Total << "\n";
}

int main()
{
    int Num1, Num2, Num3;
    readNumbres(Num1, Num2, Num3);
    PrintResult(SumOfThreeNumbers(Num1,Num2, Num3));
}