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
    int i = 1;
    
    do {
        std::cout << i << std::endl;
        i++;
    }while(i <= Number);
}

int main()
{
    printNumbers(readNumber());
}