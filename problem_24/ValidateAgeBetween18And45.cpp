#include <iostream>

int GetAge()
{
    int Age;
    std::cout << "Enter your age\n";
    std::cin >> Age;
    return Age;
}

//generic function
bool validateNumberInRange(int Number, int From, int To)
{
    return Number >= From && Number <= To;
}

void printResult()
{
    std::cout <<  (validateNumberInRange(25,GetAge(),45)? "Valid age\n":"Invalid age\n");
}

int main()
{
    printResult();
}