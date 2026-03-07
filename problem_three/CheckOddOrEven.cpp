#include <iostream>

int readNumber()
{
    int Num;
    std::cin >> Num;
    return Num;
}

void check (int Num)
{
    if(Num %2 ==0)
        std::cout << "Even\n";
    else
        std::cout << "Odd\n";
}

int main ()
{
    
}