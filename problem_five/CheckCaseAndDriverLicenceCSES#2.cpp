#include <iostream>

struct strInfo
{
    int Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};
strInfo ReadInfo()
{
    strInfo Info;
    std::cout << "Please Enter your Age\n";
    std::cin >> Info.Age;
    std::cout << "Do you have a driver licence?\nEnter 1 if yes other 0\n";
    std::cin >> Info.HasDriverLicense;
     std::cout << "Do you have a driver licence?\nEnter 1 if yes other 0\n";
    std::cin >> Info.HasRecommendation;
    return Info;
}
bool IsAccepted(strInfo Info)
{
    return  (Info.Age > 21 && Info.HasDriverLicense) || Info.HasRecommendation;
}
void PrintResult(strInfo Info)
{
    if(IsAccepted(Info))
        std::cout << "\n Hired\n";
    else
        std::cout << "\n Rejected\n";
}
int main()
{
    PrintResult(ReadInfo());
    return 0;

}