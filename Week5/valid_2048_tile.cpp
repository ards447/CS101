#include <simplecpp>

bool isValidTile(int n);

main_program
{
    int n;
    unsigned int k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        cout << (isValidTile(k) ? "Yes" : "No") << endl;
    }
}

bool isValidTile(int n)
{
    if (n == 0)
        return false;
    else
    {
        if ((n & ~(n - 1)) == n)
            return true;
        else
            return false;
    }
}