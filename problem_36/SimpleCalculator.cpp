#include <iostream>
#include <string>

void readData(int &Number1, int &Number2, char &op)
{
    std::cout << "Enter the first number\n";
    std::cin >> Number1;
    std::cout << "Enter the second number\n";
    std::cin >> Number2;
    std::cout << "Enter the operator \n";
    std::cin >> op;
}


float getResult(int &Number1, int &Number2, char &op)
{
    switch (op)
    {
    case '+':
        return Number1 + Number2;
        break;
    case '-':
        return Number1 - Number2;
        break;
    case '*':
        return Number1*Number2;
        break;
    case '/':
        return (float)Number1/(float)Number2;
        break;
    default:
        return -1;
        break;
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
    int Number1, Number2;
    char op;
    readData(Number1, Number2, op);
    printResult(getResult(Number1,Number2,op));
}