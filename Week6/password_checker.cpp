#include <iostream>
using namespace std;

int main()
{
    char ch;
    int upper = 0, lower = 0, number = 0;

    for (int i = 0; i < 8; i++)
    {
        cin >> ch;

        if (ch >= 'A' && ch <= 'Z')
            upper++;
        if (ch >= 'a' && ch <= 'z')
            lower++;
        if (ch >= '0' && ch <= '9')
            number++;
    }

    if (upper + lower + number == 8)
        cout << "khul ja sim sim" << endl;
    else
        cout << "tai tai fish" << endl;

    return 0;
}