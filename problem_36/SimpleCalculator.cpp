#include <iostream>
#include <string>

enum enOperationType {Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

int readNumber(std::string message)
{
    int Number;
    std::cout << message << "\n";
    std::cin >> Number;
    return Number;
}

enOperationType readOperator()
{
    char OperationType;
    std::cout << "Enter the operator type (+, -, *, /) ?\n";
    std::cin >> OperationType;
    return (enOperationType) OperationType;
}


float getResult(float Number1, float Number2, enOperationType OperationType)
{
    switch (OperationType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtract:
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1*Number2;
    case enOperationType::Divide:
        return Number1/Number2;
    default:
        return -1;
    }
}

void printResult(float Result)
{
    if (Result == -1.0)
        std::cout << "The Program ended with errors " << Result << std::endl;
    else
        std::cout << "The Final Result = " << Result << std::endl;
}

int main()
{
    int Number1 = readNumber("Enter the first Number");
    int Number2 = readNumber("Enter the second Number");;
    enOperationType OperationType = readOperator();
    printResult(getResult(Number1, Number2, OperationType));
}
