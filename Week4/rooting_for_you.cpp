#include <simplecpp>
#include <iomanip>

main_program
{
    double number;
    cin >> number;

    double high = number, low = 0, mid;
    double percision = 1e-6;

    while (high - low > percision)
    {
        mid = (low + high) / 2;
        if (mid * mid > number)
        {
            high = mid;
        }
        else
            low = mid;
    }

    double sqrt = (low + high) / 2;
    cout << fixed << setprecision(6) << sqrt;
}