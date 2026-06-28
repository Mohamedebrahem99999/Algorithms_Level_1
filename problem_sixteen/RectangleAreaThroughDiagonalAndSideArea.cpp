#include <iostream>
#include <cmath>

void readDimensions(float &sideLength, float &Diagonal)
{
    std::cout << "Enter the rectangle sideLength\n";
    std::cin >> sideLength;
    std::cout << "Enter the rectangle Diagonal\n";
    std::cin >> Diagonal;
}

float calculateArea (float sideLength, float Diagonal)
{
    return sqrt(pow(sideLength,2) -pow(Diagonal,2));
}

void printArea(int Area)
{
    std::cout << "Rectangle Area = " << Area << std::endl;

}

int main()
{
    float sideLength, Diagonal;

    readDimensions(sideLength, Diagonal);
    printArea(calculateArea(sideLength, Diagonal));
}