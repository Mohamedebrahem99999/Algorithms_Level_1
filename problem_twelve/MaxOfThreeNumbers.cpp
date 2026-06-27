#include <iostream>

void readNumbers(int &Num1, int &Num2)
{
    std::cout << "Enter the first Number \n";
    std::cin >> Num1;
    std::cout << "Enter the second Number \n";
    std::cin >> Num2;
}

int setMax(int Num1, int Num2)
{
    return (Num1 >= Num2? Num1: Num2) ;
}

void printMax(int Max)
{
    std::cout << Max << " is the Maximum\n";
}

int main()
{
    int Num1, Num2;
    readNumbers(Num1,Num2);
    printMax(setMax(Num1,Num2));
}