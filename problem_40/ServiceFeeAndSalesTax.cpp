#include <iostream>

float readPositiveNumber(std::string Message)
{
    float Number;
    do{
        std::cout << Message;
        std::cin >> Number;
    }while(Number <= 0);
    return Number;
}

float calcServiceFees(float BillValue)
{
    return BillValue*0.1;
}

float calcSalesTax(float BillValue)
{
    return BillValue*0.16;
}

void printTotalBill(float TotalBillValue)
{
    std::cout << "The Total Bill Value = " << TotalBillValue << "\n";
}

int main()
{
    float BillValue = readNumber("Enter the Bill Value\n");
    BillValue += calcServiceFees(BillValue);
    BillValue += calcSalesTax(BillValue);
    printTotalBill(BillValue);
}