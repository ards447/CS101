#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char ch, dch = '`';

    for (int i = 0; i < t; i++)
    {
        cin >> ch;
        if (ch == dch)
            continue;

        char dch = ch;
        ch = 'A' + 'Z' - ch;

        cout << ch;
    }

    cout << endl;
    return 0;
}