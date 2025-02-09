#include <iostream>
using namespace std;

int rotateMe(int n, char ch);

int main()
{
    int n;
    cin >> n;

    char ch;

    while (true)
    {
        cin >> ch;

        if (ch != 'R' && ch != 'L' && ch != 'X')
            continue;

        if (ch == 'X')
            break;

        n = rotateMe(n, ch);
    }

    cout << n << endl;
    return 0;
}

int rotateMe(int n, char ch)
{
    int num = 0, last_digit, pow10 = 1;

    if (ch == 'R')
    {
        last_digit = n % 10;
        n = n / 10;
        while (n)
        {
            num += (n % 10) * pow10;
            pow10 *= 10;
            n = n / 10;
        }
        num += last_digit * pow10;

        return num;
    }

    if (ch == 'L')
    {
        while (n)
        {
            pow10 *= 10;
            num += (n % 10) * pow10;
            n = n / 10;
            if (n >= 0 && n < 10)
                break;
        }
        num += n;

        return num;
    }

    return 0;
}