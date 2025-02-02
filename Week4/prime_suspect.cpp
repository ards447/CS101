#include <simplecpp>

main_program
{
    int n;
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << "sus" << endl;
    }
    else
        cout << "not sus" << endl;
}