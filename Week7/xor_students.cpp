#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string cs101[n], ma110[m];
    for (int i = 0; i < n; i++)
        cin >> cs101[i];
    for (int i = 0; i < m; i++)
        cin >> ma110[i];

    for (int i = 0; i < n; i++)
    {
        bool printable = true;
        for (int j = 0; j < m; j++)
        {
            if (cs101[i] == ma110[j])
            {
                printable = false;
                break;
            }
        }
        if (printable)
            cout << cs101[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        bool printable = true;
        for (int j = 0; j < n; j++)
        {
            if (cs101[j] == ma110[i])
            {
                printable = false;
                break;
            }
        }
        if (printable)
            cout << ma110[i] << " ";
    }

    return 0;
}