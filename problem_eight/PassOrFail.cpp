#include <iostream>

short int readMark()
{
    short int Mark;
    std::cout << "Enter your mark\n";
    std::cin >> Mark;
    while (Mark < 0 || Mark > 100)
    {
        std::cout << "Please make sure the mark >= 0 and =<100\n";
        std::cin >> Mark;
    }
    return Mark;
}
enum enPassFail {Pass = 1,Fail = 2};
enPassFail checkStat(short int Mark){
    return Mark >= 50? enPassFail::Pass :enPassFail::Fail;
}

void outStat(enPassFail Stat){
        std::cout << (Stat == enPassFail::Pass? "Success\n":"Fail\n");
}
int main()
{
    outStat(checkStat(readMark()));
}