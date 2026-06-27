#include <iostream>

void readNums(int arr[3])
{
    std::cout << "Enter the furst number\n";
    std::cin >> arr[0];
    std::cout << "Enter the second number\n";
    std::cin >> arr[1];
    std::cout << "Enter the third number\n";
    std::cin >> arr[2];
}

int SumOfThreeNumbers(int Nums[3])
{
    return Nums[0] + Nums[1] + Nums[2];
}

void PrintResult(int Total)
{
    std::cout << "The Total sum of numbers is: " << Total << "\n";
}

int main()
{
    int arr[3];
    readNums(arr);
    PrintResult(SumOfThreeNumbers(arr));
}