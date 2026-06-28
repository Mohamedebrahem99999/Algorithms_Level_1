#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

void readSquareLength(double &length)
{
    std::cout << "Enter the Length of the square\n";
    std::cin >> length;
}

double calculateArea(double length)
{
    return (.25) * (PI)*pow(length, 2);
}

void printArea(double Area)
{
    std::cout << "Circle Area = " << Area << std::endl;
}

int main()
{
    double length;
    readSquareLength(length);
    printArea(calculateArea(length));
}