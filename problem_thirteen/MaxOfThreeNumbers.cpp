#include <iostream>

void readNumbers(int &Num1, int &Num2, int &Num3)
{
    std::cout << "Enter the first Number \n";
    std::cin >> Num1;
    std::cout << "Enter the second Number \n";
    std::cin >> Num2;
    std::cout << "Enter the third Number \n";
    std::cin >> Num3;
}

int setMax(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2)
    {
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    }
    else
    {
        if (Num2 > Num3)
            return Num2;
        else
            return Num3;
    }
}

void printMax(int Max)
{
    std::cout << Max << " is the Maximum\n";
}

int main()
{
    int Num1, Num2, Num3;
    readNumbers(Num1,Num2, Num3);
    printMax(setMax(Num1,Num2,Num3));
}