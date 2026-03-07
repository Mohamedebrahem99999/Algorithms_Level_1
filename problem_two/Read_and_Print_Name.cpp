#include <iostream>
#include <string>

std::string readName()
{
    std::cout << "Enter your name\n";
    std::string Name;
    std::getline(std::cin, Name);
    return Name;
}

void printName(std::string Name)
{
    std::cout << "Your name is: " << Name << "\n";
}

int main ()
{
    printName(readName());
}