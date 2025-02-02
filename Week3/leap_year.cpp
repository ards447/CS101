#include <simplecpp>

main_program
{
    int y;
    cin >> y;

    if (y % 4 == 0 && y % 100 != 0)
        cout << "Leap Year" << endl;

    else if (y % 400 == 0)
        cout << "Century Leap Year" << endl;

    else
        cout << "Not a Leap Year" << endl;
}