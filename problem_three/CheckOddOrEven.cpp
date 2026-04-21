#include <iostream>
enum enumberType{Odd = 1, Even = 2};

int readNumber()
{
    int Num;
    std::cin >> Num;
    return Num;
}
enumberType checkNumberType(int Num)
{
    int Result = Num%2;
    if(Result==0)
        return enumberType::Even;
    else
        return enumberType::Odd;
}
void printNumberType(enumberType numberType)
{
    if (numberType == enumberType::Even)
        std::cout << "\n Number is Even\n";
    else
        std::cout << "\n Number is Odd\n";
}

int main ()
{
    printNumberType(checkNumberType(readNumber()));
}