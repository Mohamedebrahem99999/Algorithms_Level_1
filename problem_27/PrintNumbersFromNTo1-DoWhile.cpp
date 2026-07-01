#include <iostream>

int readNumber()
{
    int Number;
    std::cout << "Enter the End\n";
    std::cin >> Number;
    return Number;
}
void printNumbers(int Number)
{
    int i = Number;
    
    do {
        std::cout << i << std::endl;
        i--;
    }while(i >= 1);
}

int main()
{
    printNumbers(readNumber());
}