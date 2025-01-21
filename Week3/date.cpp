#include <simplecpp>

main_program
{
    int y, d;
    cin>>y>>d;

    bool isLeapYear = false;

    if (y%4==0 && y%100!=0 || y%400==0)
    {
        isLeapYear=true;
    }
    
}