#include <simplecpp>

main_program
{
    int row;
    cin >> row;

    int i = 1;
    repeat(row)
    {
        repeat(row - i)
        {
            cout << "_";
        }
        repeat(2 * i - 1)
        {
            cout << "*";
        }
        repeat(row - i)
        {
            cout << "_";
        }
        cout << endl;
        i++;
    }
}