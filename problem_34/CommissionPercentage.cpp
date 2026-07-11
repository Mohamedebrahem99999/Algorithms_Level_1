#include <iostream>
int readNumber()
{
    int Number;
    std::cout << "Enter your Total Sales\n";
    std::cin >> Number;
    return Number;
}

double getCommissionPercentage(int Sales)
{
    if(Sales > 1000000)
        return 0.01;
    else if(Sales > 500000)
        return 0.02;
    else if(Sales > 100000)
        return 0.03;
    else if(Sales > 50000)
        return 0.05;
    else
        return 0;
}

void printCommissionPercentage(double CommissionPercentage)
{
    std::cout << "Total Commission Percentage is " << CommissionPercentage << "\n";
}

double getCommissionAmount(int Sales, double CommissionPercentage)
{
    return (double)Sales * CommissionPercentage;
}

void printCommissionAmount(double CommissionAmount)
{
    std::cout << "The Total Commission Amount = " << CommissionAmount << "\n";
}

int main()
{
    int Sales = readNumber();
    double CommissionPercentage = getCommissionPercentage(Sales);
    printCommissionPercentage(CommissionPercentage);
    printCommissionAmount(getCommissionAmount(Sales,CommissionPercentage));
}