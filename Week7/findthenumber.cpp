#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int number[n];
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
    }

    int X;
    cin >> X;

    bool noMatch = true;

    for (int i = 0; i < n; i++)
    {
        if (number[i] == X)
        {
            cout << i << ' ';
            noMatch = false;
        }
    }

    if (noMatch)
    {
        cout << -1;
    }

    cout << endl;

    return 0;
}