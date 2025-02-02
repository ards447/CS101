#include <simplecpp>

main_program
{
    int m, n, gcd;
    cin >> m >> n;

    if (m > n)
    {
        gcd = n;
    }
    else
        gcd = m;

    while (true)
    {
        if (m % gcd == 0 && n % gcd == 0)
            break;

        gcd--;
    }

    int lcm = m * n / gcd;
    cout << lcm << endl;
}