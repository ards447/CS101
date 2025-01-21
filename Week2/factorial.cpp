#include <simplecpp>

main_program
{
    int num, factorial = 1, i = 1;
    cin >> num;

    if (num == 0)
    {
        factorial = 1;
    }
    else
    {
        repeat(num)
        {
            factorial = factorial * i;
            i++;
        }
    }
    cout << factorial << endl;
}