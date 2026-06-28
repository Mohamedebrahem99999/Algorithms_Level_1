#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

void readDimensions(double &Diameter)
{
    std::cout << "Enter the Diameter of the circle\n";
    std::cin >> Diameter;
}

double calculateArea (double Diameter)
{
    return (.25) * (PI) * pow(Diameter,2);
}

void printArea(double Area)
{
    std::cout << "Circle Area = " << Area << std::endl;
}

int main()
{
    double Diameter;
    readDimensions(Diameter);
    printArea(calculateArea(Diameter));
}