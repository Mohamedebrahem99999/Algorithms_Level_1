#include <iostream>
#include <string>
std::string get_full_name(std::string first_name, std::string last_name)
{
    return first_name +" "+ last_name;
}
std::string readName()
{
    std::cout << "Enter your name\n";
    std::string first_name, last_name, full_name;
    std::cin >> first_name >> last_name;
    return get_full_name(first_name, last_name);
}

void printName(std::string Name)
{
    std::cout << "Your name is: " << Name << "\n";
}

int main ()
{
    printName(readName());
}