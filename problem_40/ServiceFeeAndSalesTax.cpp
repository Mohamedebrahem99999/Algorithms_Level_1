#include <iostream>

float readNumber(std::string message)
{
    float Number;
    std::cout << message;
    std::cin >> Number;
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