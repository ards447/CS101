#include <simplecpp>

main_program
{
    int n, digit, sum = 0;
    cin >> n;

    int number = n;

    if (n < 10)
    {
        n = -n;
    }

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    if (number % sum == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}