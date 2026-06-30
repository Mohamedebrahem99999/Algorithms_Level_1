#include <iostream>>

bool validateNumberInRange(int Number, int From, int To)
{
    return Number >= From && Number <= To;
}

int readUserInput()
{
    int Number = 0;
    do
    {
        std::cout << "Enter a number between 18 and 45\n";
        std::cin >> Number;
    } while (!validateNumberInRange(Number,18,45));
}

void printResult()
{
    std::cout << "Valid Number\n";
}


int main()
{
    readUserInput();
    printResult();

}

