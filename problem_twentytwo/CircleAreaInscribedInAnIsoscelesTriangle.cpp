#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

void readTriangleDimensions(double &Side, double &Base)
{
    std::cout << "Enter the Side of the Triangle\n";
    std::cin >> Side;
    std::cout << "Enter the Base of the Triangle\n";
    std::cin >> Base;
}

double calculateArea(double Side, double Base)
{
    return PI*((pow(Base,2)*(2*Side-Base))/(4*(2*Side+Base)));
}

void printArea(double Area)
{
    std::cout << "Circle Area = " << Area << std::endl;
}

int main()
{
    double Side, Base;
    readTriangleDimensions(Side,Base);
    printArea(calculateArea(Side,Base));
}