#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

void readTriangleDimensions(double &length)
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
    readTriangleDimensions(length);
    printArea(calculateArea(length));
}