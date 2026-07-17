#include <iostream>

int readPositiveNumber(std::string Message)
{
    int Number;
    do{
        std::cout << Message;
        std::cin >> Number;
    }while(Number <= 0);
    return Number;
}

int calcRemainder(int TotalPill, int CashPaid)
{
    return CashPaid - TotalPill;
}

void printRemainder(int Remainder)
{
    std::cout << "The total remainder = " << Remainder << std::endl;
}

int main()
{
    int TotalPill = readPositiveNumber("Enter the value of the total pill\n");
    int CashPaid = readPositiveNumber("Enter the value of the cash paid\n");
    printRemainder(calcRemainder(TotalPill,CashPaid));

}