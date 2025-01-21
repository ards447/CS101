#include <simplecpp>
#include <iomanip>

main_program
{
    float celsius;
    cin >> celsius;

    float farhenheit = (celsius) * (float(9) / float(5)) + 32;

    cout << fixed << setprecision(2) << farhenheit << endl;
}