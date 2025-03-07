#include <simplecpp>

int &twice(int &a)
{
    return a*2;
}

main_program
{
    int i = 5;
    (twice(i))*=2;
    cout << i;
}