#include <iostream>

struct StPiggyBankContent
{
    int Pennies;
    int Nickels;
    int Dimes;
    int Quarters;
    int Dollars;
};

StPiggyBankContent fillMyCoins()
{
    StPiggyBankContent PiggyBankContent;
    std::cout << "Enter the number of Pennies you have\n";
    std::cin >> PiggyBankContent.Pennies;
    std::cout << "Enter the number of Nickels you have\n";
    std::cin >> PiggyBankContent.Nickels;
    std::cout << "Enter the number of Dimes you have\n";
    std::cin >> PiggyBankContent.Dimes;
    std::cout << "Enter the number of Quarters you have\n";
    std::cin >> PiggyBankContent.Quarters;
    std::cout << "Enter the number of Dollars you have\n";
    std::cin >> PiggyBankContent.Dollars;
    return PiggyBankContent;
}

int getTotalAmountInPennis(StPiggyBankContent PiggyBankContent)
{
    return (PiggyBankContent.Pennies + PiggyBankContent.Nickels*5 + PiggyBankContent.Dimes*10 + PiggyBankContent.Quarters*25 + PiggyBankContent.Dollars*100);
}

void printTotalAmountInPennis(int TotalAmountInPennis)
{
    std::cout << "The Total Amount of money in Pennis is " << TotalAmountInPennis << "\n";
}

float getTotalAmountInDollars(StPiggyBankContent PiggyBankContent)
{
    return (float)(PiggyBankContent.Pennies + PiggyBankContent.Nickels*5 + PiggyBankContent.Dimes*10 + PiggyBankContent.Quarters*25 + PiggyBankContent.Dollars*100)/100;
}

void printTotalAmountInDollars(float TotalAmountInDollars)
{
    std::cout << "The Total Amount of money in Pennis is " << TotalAmountInDollars << "\n";
}

int main()
{
    StPiggyBankContent MyCoins = fillMyCoins();
    printTotalAmountInPennis(getTotalAmountInPennis(MyCoins));
    printTotalAmountInDollars(getTotalAmountInDollars(MyCoins));
}