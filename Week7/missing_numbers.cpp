#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n] = {};
    for (int i = 0; i < n; i++)
        cin >> A[i];

    for (int i = 0; i < n; i++)
    {
        bool exist = false;
        for (int j = 0; j < n; j++)
        {
            if (i + 1 == A[j])
            {
                exist = true;
                break;
            }
        }

        if (!exist)
            cout << i + 1 << " ";
    }

    return 0;
}