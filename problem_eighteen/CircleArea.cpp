#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

void readDimensions(double &Radius)
{
    std::cout << "Enter the Radius of the circle\n";
    std::cin >> Radius;
}

double calculateArea (double Radius)
{
    return (PI) * pow(Radius,2);
}

void printArea(double Area)
{
    std::cout << "Circle Area = " << Area << std::endl;
}

int main()
{
    double Radius;
    readDimensions(Radius);
    printArea(calculateArea(Radius));
}