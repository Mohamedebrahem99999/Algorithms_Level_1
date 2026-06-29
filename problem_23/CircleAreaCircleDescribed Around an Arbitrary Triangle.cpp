#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

void readTriangleDimensions(double TriangleDimensions[3])
{
    std::cout << "Enter the Length of the first side\n";
    std::cin >> TriangleDimensions[0];
    std::cout << "Enter the length of the second side\n";
    std::cin >> TriangleDimensions[1];
    std::cout << "Enter the length of the third side\n";
    std::cin >> TriangleDimensions[2];
}

double calculateArea(double TriangleDimensions[3])
{
    double SideProduct = 1;
    double P = 0;
    for (int Side = 0; Side < 3; Side++)
    {
        SideProduct*= TriangleDimensions[Side];
        P += TriangleDimensions[Side];
    }
    P /= 2;

    double ProductOfDifferences = 1;
    for (int Side = 0; Side < 3; Side++)
    {
        ProductOfDifferences*= (P-TriangleDimensions[Side]);
    }

    return PI*(pow(SideProduct/(4*sqrt(P*ProductOfDifferences)),2));
}

void printArea(double Area)
{
    std::cout << "Circle Area = " << Area << std::endl;
}

int main()
{
    double TriangleDimensions[3];
    readTriangleDimensions(TriangleDimensions);
    printArea(calculateArea(TriangleDimensions));
}