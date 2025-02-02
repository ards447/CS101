#include <iostream>
using namespace std;

int main()
{
    int number, power, result = 1;
    cin >> number >> power;

    while (power > 0)
    {
        if (power % 2 != 0)
        {
            result *= number;
        }
        number *= number;
        power /= 2;
    }

    cout << result << endl;
}