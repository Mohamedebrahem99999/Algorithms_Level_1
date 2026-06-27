#include <iostream>

void readNumbers(int &Num1, int &Num2)
{
    std::cout << "Enter the first Number\n";
    std::cin >> Num1;
    std::cout << "Enter the second Number\n";
    std::cin >> Num2;
}

void printNumbersBeforeSwap(int Num1, int Num2)
{
    std::cout << "Num1 before swap " << Num1 << "\n";
    std::cout << "Num2 before swap " << Num2 << "\n";
}

void Swap(int &A, int &B)
{
    int buffer;
    buffer = A;
    A = B;
    B = buffer;
}

void printNumbersAfterSwap(int Num1, int Num2)
{
    std::cout << "Num1 After swap " << Num1 << "\n";
    std::cout << "Num2 After swap " << Num2 << "\n";
}

int main()
{
    int Num1, Num2, Num3;
    readNumbers(Num1, Num2);
    printNumbersBeforeSwap(Num1,Num2);
    Swap(Num1,Num2);
    printNumbersBeforeSwap(Num1,Num2);
    
}