#include <iostream>

int SumOfThreeNumbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}

void PrintResult(int Total)
{
    std::cout << "The Total sum of numbers is: " << Total << "\n";
}

int main()
{
    int arr[3];
    std::cout << "Enter the furst number\n";
    std::cin >> arr[0];
    std::cout << "Enter the second number\n";
    std::cin >> arr[1];
    std::cout << "Enter the third number\n";
    std::cin >> arr[2];
    
    PrintResult(SumOfThreeNumbers(arr[0],arr[1], arr[2]));
}