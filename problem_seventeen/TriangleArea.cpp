#include <iostream>
#include <cmath>

void readDimensions(float &Height, float &Base)
{
    std::cout << "Enter the triangle base length\n";
    std::cin >> Height;
    std::cout << "Enter the triangle height\n";
    std::cin >> Base;
}

float calculateArea (float Height, float Base)
{
    return (0.5) * (Base*Height);
}

void printArea(int Area)
{
    std::cout << "Rectangle Area = " << Area << std::endl;
}

int main()
{
    float Height, Base;
    readDimensions(Height, Base);
    printArea(calculateArea(Height, Base));
}