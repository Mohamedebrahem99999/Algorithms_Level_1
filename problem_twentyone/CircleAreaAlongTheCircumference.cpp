#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

void readSquareLength(double &Circumference)
{
    std::cout << "Enter the Circumference of the Circle\n";
    std::cin >> Circumference;
}

double calculateArea(double Circumference)
{
    return ((.25)* pow(Circumference, 2))/PI;
}

void printArea(double Area)
{
    std::cout << "Circle Area = " << Area << std::endl;
}

int main()
{
    double Circumference;
    readSquareLength(Circumference);
    printArea(calculateArea(Circumference));
}