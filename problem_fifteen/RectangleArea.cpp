#include <iostream>

struct rectDimensions
{
    int width, height;
};

rectDimensions readDimensions()
{
    rectDimensions Dimensions;
    std::cout << "Enter the rectangle width\n";
    std::cin >> Dimensions.width;
    std::cout << "Enter the rectangle height\n";
    std::cin >> Dimensions.height;
    return Dimensions;
}

int calculateArea (rectDimensions Dimensions)
{
    return Dimensions.height * Dimensions.width;
}

void printArea(int Area)
{
    std::cout << "Rectangle Area = " << Area << std::endl;

}

int main()
{
    printArea(calculateArea(readDimensions()));
}